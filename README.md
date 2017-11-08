## Redpill

Malware analysis evasion simulator. If interrogated, takes a "red pill" to minimize disclosure of secrets.


### Snippets
Snippets of evasive behaviour can be compiled into a suite of tests that can be run on any sandbox to determine its ability to disguise itself to malware.

- `cpuid.c` determine if running on a hypervisor VM.
- `encode_strings.py` pre-process constant strings in C code and encode them to hide them from static analysis.

## How to compile

`gcc cpuid.c -s -o a.stripped.out`

### References

https://kb.vmware.com/selfservice/microsites/search.do?language=en_US&cmd=displayKC&externalId=1009458

https://en.wikipedia.org/wiki/CPUID#CPUID_usage_from_high-level_languages
