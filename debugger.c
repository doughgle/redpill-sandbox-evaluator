#include <stdio.h>
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>

int isDebuggerPresent()
{
    char buf[1024];
    int debugger_present = 0;

    int status_fd = open("/proc/self/status", O_RDONLY);
    if (status_fd == -1)
        return 0;

    size_t num_read = read(status_fd, buf, sizeof(buf)-1);

    if (num_read > 0)
    {
        static const char TracerPid[] = "TracerPid:";
        char *tracer_pid;

        buf[num_read] = 0;
        tracer_pid    = strstr(buf, TracerPid);
        if (tracer_pid)
            debugger_present = !!atoi(tracer_pid + sizeof(TracerPid) - 1);
    }

    return debugger_present;
}


int main() {
    return isDebuggerPresent();
}
