#!/usr/bin/env bash
#
# Test default configuration with CHPL_LLVM=llvm and pass --llvm flag to
# compiler on linux64.

CWD=$(cd $(dirname $0) ; pwd)
source $CWD/common.bash
source $CWD/common-llvm.bash

$CWD/nightly -cron -llvm