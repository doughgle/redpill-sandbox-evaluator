#!/bin/bash

. assert.sh
# exit code of `./is-hypervisor-present` is expected to be 0
assert_raises "./is-hypervisor-present"
assert_raises "./is-debugger-present"
assert_raises "./is-ptraced"
assert_raises "./in_container.py"
# end of test suite
assert_end Redpill Sandbox Evaluator
