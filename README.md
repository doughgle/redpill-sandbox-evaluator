## Redpill Sandbox Evaluator
A suite of tests that can be run on any sandbox to determine its ability to disguise itself to malware.

### Example tests
- `is-hypervisor-present` determine if running on a hypervisor VM.
- `encode_strings.py` pre-process constant strings in C code and encode them to hide them from static analysis.

## How to compile

`./compile-tests.sh`

## How to run

`./run-tests.sh`

### References

https://kb.vmware.com/selfservice/microsites/search.do?language=en_US&cmd=displayKC&externalId=1009458

https://en.wikipedia.org/wiki/CPUID#CPUID_usage_from_high-level_languages

https://github.com/lehmannro/assert.sh
