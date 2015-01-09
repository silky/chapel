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

#include "ipe.h"

#include "expr.h"
#include "log.h"
#include "passes.h"
#include "stmt.h"

struct PassInfo
{
  const char* name;
  void        (*function)();
};

static PassInfo sPassList[] =
{
  { "parse",    parse       }
};

static int sRootModuleIndex = 0;

// Invoked by Root Init when count for IPE core primitives is known
void ipeRootInit()
{
  sRootModuleIndex = rootModule->block->body.length;
}

void ipeRun()
{
  size_t passListSize = sizeof(sPassList) / sizeof(sPassList[0]);

  setupLogfiles();

  for (size_t i = 0; i < passListSize; i++)
  {
    sPassList[i].function();

    log_writeLog(sPassList[i].name, i + 1, 'p');

    cleanAst();

    USR_STOP();
  }

  destroyAst();
  teardownLogfiles();
}