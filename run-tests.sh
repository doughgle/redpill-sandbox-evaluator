#!/bin/bash

. assert.sh
# exit code of `./is-hypervisor-present` is expected to be 0
assert_raises "./is-hypervisor-present"
# end of test suite
assert_end Redpill Sandbox Evaluator
