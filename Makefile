# Copyright 2004-2015 Cray Inc.
# Other additional copyright holders may be indicated within.
#
# The entirety of this work is licensed under the Apache License,
# Version 2.0 (the "License"); you may not use this file except
# in compliance with the License.
#
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

#
# top-level Chapel Makefile
#

#
# This is the one Makefile that does not/should not include
# $CHPL_HOME/make/Makefile.base.  The reasons are:
#
# (1) it does not need to include that file because it does not rely
# on any of its settings; it only is responsible for cd-ing into
# subdirectories and having them make things (where they should
# include Makefile.base).
#
# (2) including it will actually break the build because there are
# aspects of the CHPL_* environment that we don't know yet.
# Specifically, the third-party-try-opt rule speculatively tries to
# build GMP and RE2 if the user has not expressed a preference, and we
# can't know whether CHPL_GMP/RE2 should be set to 'none' or the
# package until those attempts to build complete.  If Makefile.base is
# included here, it will set them for the make environment based on
# the current state of the world, not the
# post-attempt-to-build-gmp/re2 world.
#

#
# We set this to avoid extraneous printing of Makefile subdirectories
# by default.  Having this un-set will break the Travis builds.
# Normally, Makefile.base sets this for our other Makefiles.
#
MAKEFLAGS = --no-print-directory

export CHPL_MAKE_HOME=$(shell pwd)

default: all

all: comprt
	@test -r Makefile.devel && $(MAKE) develall || echo ""

comprt: FORCE
	@$(MAKE) compiler
	@$(MAKE) third-party-try-opt
	@$(MAKE) always-build-test-venv
	@$(MAKE) runtime
	@$(MAKE) modules

compiler: FORCE
	cd compiler && $(MAKE)

parser: FORCE
	cd compiler && $(MAKE) parser

modules: FORCE
	cd modules && $(MAKE)

runtime: FORCE
	cd runtime && $(MAKE)
	-@if [ "llvm" = `${CHPL_MAKE_HOME}/util/chplenv/chpl_llvm.py` ]; then \
	source ${CHPL_MAKE_HOME}/util/config/set_clang_included.bash && \
	cd runtime && $(MAKE) ; \
	fi

third-party: FORCE
	cd third-party && $(MAKE)

third-party-try-opt: third-party-try-re2 third-party-try-gmp

third-party-try-re2: FORCE
	-@if [ -z "$$CHPL_REGEXP" ]; then \
	cd third-party && $(MAKE) try-re2; \
	if [ "llvm" = `${CHPL_MAKE_HOME}/util/chplenv/chpl_llvm.py` ]; then \
	source ${CHPL_MAKE_HOME}/util/config/set_clang_included.bash && \
	$(MAKE) try-re2; \
	fi \
	fi

third-party-try-gmp: FORCE
	-@if [ -z "$$CHPL_GMP" ]; then \
	cd third-party && $(MAKE) try-gmp; \
	if [ "llvm" = `${CHPL_MAKE_HOME}/util/chplenv/chpl_llvm.py` ]; then \
	source ${CHPL_MAKE_HOME}/util/config/set_clang_included.bash && \
	$(MAKE) try-gmp; \
	fi \
	fi

third-party-test-venv: FORCE
	cd third-party && $(MAKE) test-venv

third-party-chpldoc-venv: FORCE
	cd third-party && $(MAKE) chpldoc-venv

test-venv: third-party-test-venv

chpldoc: compiler third-party-chpldoc-venv
	cd compiler && $(MAKE) chpldoc
	@test -r Makefile.devel && $(MAKE) man-chpldoc || echo ""

always-build-test-venv: FORCE
	-@if [ -n "$$CHPL_ALWAYS_BUILD_TEST_VENV" ]; then \
	$(MAKE) test-venv; \
	fi

clean-module-docs:
	cd modules && $(MAKE) clean-documentation

module-docs-only:
	cd modules && $(MAKE) documentation

module-docs: chpldoc
# Call `make module-docs-only` as part of the recipe instead of as a
# dependency so parallel make executions correctly build chpldoc first.
	$(MAKE) module-docs-only

chplvis: compiler third-party-fltk FORCE
	cd tools/chplvis && $(MAKE)
	cd tools/chplvis && $(MAKE) install

third-party-fltk: FORCE
	cd third-party/fltk && $(MAKE)

clean: FORCE
	cd compiler && $(MAKE) clean
	cd modules && $(MAKE) clean
	cd runtime && $(MAKE) clean
	cd third-party && $(MAKE) clean
	-@[ -d doc/sphinx ] && cd doc/sphinx && $(MAKE) clean
	rm -f util/chplenv/*.pyc

cleanall: FORCE
	cd compiler && $(MAKE) cleanall
	cd modules && $(MAKE) cleanall
	cd runtime && $(MAKE) cleanall
	cd third-party && $(MAKE) cleanall
	-@[ -d doc/sphinx ] && cd doc/sphinx && $(MAKE) cleanall
	rm -f util/chplenv/*.pyc

cleandeps: FORCE
	cd compiler && $(MAKE) cleandeps
	cd runtime && $(MAKE) cleandeps

clobber: FORCE
	cd compiler && $(MAKE) clobber
	cd modules && $(MAKE) clobber
	cd runtime && $(MAKE) clobber
	cd third-party && $(MAKE) clobber
	cd tools/chplvis && $(MAKE) clobber
	-@[ -d doc/sphinx ] && cd doc/sphinx && $(MAKE) clobber
	rm -rf bin
	rm -rf lib
	rm -f util/chplenv/*.pyc

depend:
	@echo "make depend has been deprecated for the time being"

check:
	@bash $(CHPL_MAKE_HOME)/util/test/checkChplInstall

check-chpldoc: chpldoc third-party-test-venv
	@bash $(CHPL_MAKE_HOME)/util/test/checkChplDoc

-include Makefile.devel

FORCE:
