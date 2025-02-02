/**************************************************************************
*  Copyright 2011 Sandia Corporation. Under the terms of Contract
*  DE-AC04-94AL85000, there is a non-exclusive license for use of this work by
*  or on behalf of the U.S. Government. Export of this program may require a
*  license from the United States Government
**************************************************************************/

/*
 * Copyright 2004-2015 Cray Inc.
 * Other additional copyright holders may be indicated within.
 *
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 *
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _tasks_qthreads_h_
#define _tasks_qthreads_h_

#include "chpl-tasks-prvdata.h"
#include "chpltypes.h"

#include "qthread.h"
#include "qthread-chapel.h"

#include <assert.h>
#include <pthread.h>
#include <stdint.h>
#include <stdio.h>

#define CHPL_COMM_YIELD_TASK_WHILE_POLLING
void chpl_task_yield(void);

//
// Type (and default value) used to communicate task identifiers
// between C code and Chapel code in the runtime.
//
typedef unsigned int chpl_taskID_t;
#define chpl_nullTaskID QTHREAD_NULL_TASK_ID

//
// Sync variables
//
typedef struct {
    aligned_t lockers_in;
    aligned_t lockers_out;
    uint_fast32_t uncontested_locks;
    int       is_full;
    syncvar_t signal_full;
    syncvar_t signal_empty;
} chpl_sync_aux_t;

#define chpl_sync_reset(x) qthread_syncvar_empty(&(x)->sync_aux.signal_full)

#define chpl_read_FE(x) ({                                                           \
                             uint64_t y;                                             \
                             qthread_syncvar_readFE(&y, &(x)->sync_aux.signal_full); \
                             y; })

#define chpl_read_FF(x) ({                                                           \
                             uint64_t y;                                             \
                             qthread_syncvar_readFF(&y, &(x)->sync_aux.signal_full); \
                             y; })

#define chpl_read_XX(x) ((x)->sync_aux.signal_full.u.s.data)

#define chpl_write_EF(x, y) do {                                 \
        uint64_t z = (uint64_t)(y);                              \
        qthread_syncvar_writeEF(&(x)->sync_aux.signal_full, &z); \
} while(0)

#define chpl_write_FF(x, y) do {                                    \
        uint64_t z, dummy;                                          \
        z = (uint64_t)(y);                                          \
        qthread_syncvar_readFE(&dummy, &(x)->sync_aux.signal_full); \
        qthread_syncvar_writeF(&(x)->sync_aux.signal_full, &z);     \
} while(0)

#define chpl_write_XF(x, y) do {                                \
        uint64_t z = (uint64_t)(y);                             \
        qthread_syncvar_writeF(&(x)->sync_aux.signal_full, &z); \
} while(0)

#define chpl_single_reset(x) qthread_syncvar_empty(&(x)->single_aux.signal_full)

#define chpl_single_read_FF(x) ({                                                             \
                                    uint64_t y;                                               \
                                    qthread_syncvar_readFF(&y, &(x)->single_aux.signal_full); \
                                    y; })

#define chpl_single_write_EF(x, y) do {                            \
        uint64_t z = (uint64_t)(y);                                \
        qthread_syncvar_writeEF(&(x)->single_aux.signal_full, &z); \
} while(0)

#define chpl_single_read_XX(x) ((x)->single_aux.signal_full.u.s.data)

//
// Task private data
//

extern
#ifdef __cplusplus
"C"
#endif

volatile int chpl_qthread_done_initializing;

typedef struct {
    c_string task_filename;
    int task_lineno;
    chpl_taskID_t id;
    chpl_bool is_executeOn;
    c_sublocid_t requestedSubloc;  // requested sublocal for task
    chpl_task_prvData_t prvdata;
} chpl_task_prvDataImpl_t;

// Define PRV_DATA_IMPL_VAL to set up a chpl_task_prvData_t.
#define PRV_DATA_IMPL_VAL(_fn, _ln, _id, _is_execOn, _subloc, _serial) \
        { .task_filename = _fn, \
          .task_lineno = _ln, \
          .id = _id, \
          .is_executeOn = _is_execOn, \
          .requestedSubloc = _subloc, \
          .prvdata = { .serial_state = _serial } }

typedef struct {
    void                     *fn;
    void                     *args;
    chpl_bool                countRunning;
    chpl_task_prvDataImpl_t  chpl_data;
} chpl_qthread_wrapper_args_t;

// Structure of task-local storage
typedef struct chpl_qthread_tls_s {
    /* Task private data: serial state, etc. */
    chpl_task_prvDataImpl_t chpl_data;
    /* Reports */
    c_string    lock_filename;
    size_t      lock_lineno;
} chpl_qthread_tls_t;

extern pthread_t chpl_qthread_process_pthread;
extern pthread_t chpl_qthread_comm_pthread;

extern chpl_qthread_tls_t chpl_qthread_process_tls;
extern chpl_qthread_tls_t chpl_qthread_comm_task_tls;

#define CHPL_TASK_STD_MODULES_INITIALIZED chpl_task_stdModulesInitialized
void chpl_task_stdModulesInitialized(void);

// Wrap qthread_get_tasklocal() and assert that it is always available.
static inline chpl_qthread_tls_t * chpl_qthread_get_tasklocal(void)
{
    chpl_qthread_tls_t* tls;

    if (chpl_qthread_done_initializing) {
        tls = (chpl_qthread_tls_t *)
              qthread_get_tasklocal(sizeof(chpl_qthread_tls_t));
        if (tls == NULL) {
            pthread_t me = pthread_self();
            if (pthread_equal(me, chpl_qthread_comm_pthread))
                tls = &chpl_qthread_comm_task_tls;
            else if (pthread_equal(me, chpl_qthread_process_pthread))
                tls = &chpl_qthread_process_tls;
        }
        assert(tls);
    }
    else
        tls = NULL;

    return tls;
}

#ifdef CHPL_TASK_GET_PRVDATA_IMPL_DECL
#error "CHPL_TASK_GET_PRVDATA_IMPL_DECL is already defined!"
#else
#define CHPL_TASK_GET_PRVDATA_IMPL_DECL 1
#endif
static inline chpl_task_prvData_t* chpl_task_getPrvData(void)
{
    chpl_qthread_tls_t * data = chpl_qthread_get_tasklocal();
    if (data) {
        return &data->chpl_data.prvdata;
    }
    assert(data);
    return NULL;
}

//
// Sublocale support
//
#ifdef CHPL_TASK_GETSUBLOC_IMPL_DECL
#error "CHPL_TASK_GETSUBLOC_IMPL_DECL is already defined!"
#else
#define CHPL_TASK_GETSUBLOC_IMPL_DECL 1
#endif
static inline
c_sublocid_t chpl_task_getSubloc(void)
{
    return (c_sublocid_t) qthread_shep();
}

#ifdef CHPL_TASK_SETSUBLOC_IMPL_DECL
#error "CHPL_TASK_SETSUBLOC_IMPL_DECL is already defined!"
#else
#define CHPL_TASK_SETSUBLOC_IMPL_DECL 1
#endif
static inline
void chpl_task_setSubloc(c_sublocid_t subloc)
{
    qthread_shepherd_id_t curr_shep;

    assert(subloc != c_sublocid_none);

    // Only change sublocales if the caller asked for a particular one,
    // which is not the current one, and we're a (movable) task.
    //
    // Note: It's likely that this won't work in all cases where we need
    //       it.  In particular, we envision needing to move execution
    //       from sublocale to sublocale while initializing the memory
    //       layer, in order to get the NUMA domain affinity right for
    //       the subparts of the heap.  But this will be happening well
    //       before tasking init and in any case would be done from the
    //       main thread of execution, which doesn't have a shepherd.
    //       The code below wouldn't work in that situation.
    if ((curr_shep = qthread_shep()) != NO_SHEPHERD) {
        chpl_qthread_tls_t * data = chpl_qthread_get_tasklocal();
        if (data) {
            data->chpl_data.requestedSubloc = subloc;
        }

        if (subloc != c_sublocid_any &&
            (qthread_shepherd_id_t) subloc != curr_shep) {
            qthread_migrate_to((qthread_shepherd_id_t) subloc);
        }
    }
}

#ifdef CHPL_TASK_GETREQUESTEDSUBLOC_IMPL_DECL
#error "CHPL_TASK_GETREQUESTEDSUBLOC_IMPL_DECL is already defined!"
#else
#define CHPL_TASK_GETREQUESTEDSUBLOC_IMPL_DECL 1
#endif
static inline
c_sublocid_t chpl_task_getRequestedSubloc(void)
{
    chpl_qthread_tls_t * data = chpl_qthread_get_tasklocal();
    if (data) {
        return data->chpl_data.requestedSubloc;
    }
    return c_sublocid_any;
}

//
// Can we support remote caching?
//
#ifdef CHPL_TASK_SUPPORTS_REMOTE_CACHE_IMPL_DECL
#error "CHPL_TASK_SUPPORTS_REMOTE_CACHE_IMPL_DECL is already defined!"
#else
#define CHPL_TASK_SUPPORTS_REMOTE_CACHE_IMPL_DECL 1
#endif
static inline
int chpl_task_supportsRemoteCache(void) {
  return CHPL_QTHREAD_SUPPORTS_REMOTE_CACHE;
}

#endif // ifndef _tasks_qthreads_h_
/* vim:set expandtab: */
