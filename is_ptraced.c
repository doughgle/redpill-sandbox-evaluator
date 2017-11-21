#include <stdio.h>
#include <sys/ptrace.h>
#include <stdio.h>

/**
long ptrace(enum __ptrace_request request, pid_t pid,
void *addr, void *data);

PTRACE_TRACEME
Indicate that this process is to be traced by its parent.  A
process probably shouldn't make this request if its parent
isn't expecting to trace it.  (pid, addr, and data are
ignored.)

The PTRACE_TRACEME request is used only by the tracee; the
remaining requests are used only by the tracer.
*/
int main()
{
    if (ptrace(PTRACE_TRACEME, 0, 1, 0) == -1)
    {
        perror(NULL);
        return 1;
    }
    // normal execution
    return 0;
}
