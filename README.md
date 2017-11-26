## Redpill Sandbox Evaluator
A suite of tests that can be run on any sandbox to determine its ability to disguise itself to malware.

### Example tests
- `is-hypervisor-present` determine if running on a hypervisor VM.
- `encode_strings.py` pre-process constant strings in C code and encode them to hide them from static analysis.

## How to compile
`./compile-tests.sh`

## How to run
`./run-tests.sh`

## How to add a test
- Write a test that returns a 0 if pass, non-zero otherwise - any language will do :)
- Add a line in `./run-tests.sh` to call the test.
- If your test needs a compile step, add the command to compile it in `compile-tests.sh`

## What else can I do?
Refer to https://github.com/lehmannro/assert.sh for other test commands besides `assert_raises`

## Troubleshooting
If you see this when excuting `./run-tests.sh`:
```
test #1 "./is-hypervisor-present" failed:
program terminated with code 127 instead of 0
```

it means that "./is-hypervisor-present" is not found. Check that it's compiled and named correctly.

If you see
```
program terminated with code 126 instead of 0
```
it likely means that execute permissions are not set correctly.

### References

https://kb.vmware.com/selfservice/microsites/search.do?language=en_US&cmd=displayKC&externalId=1009458

https://en.wikipedia.org/wiki/CPUID#CPUID_usage_from_high-level_languages

https://github.com/lehmannro/assert.sh
