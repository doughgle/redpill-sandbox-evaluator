#!/bin/bash

gcc cpuid.c -o is-hypervisor-present
gcc debugger.c -o is-debugger-present
gcc is_ptraced.c -o is-ptraced
