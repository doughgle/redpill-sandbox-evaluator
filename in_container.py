#!/usr/bin/python
import os
import subprocess
import sys

def in_container():
    # type: () -> bool
    """ Determines if we're running in an lxc/docker container. """
    out = subprocess.check_output('cat /proc/1/sched', shell=True)
    out = out.decode('utf-8').lower()
    checks = [
        'docker' in out,
        '/lxc/' in out,
        out.split()[0] not in ('systemd', 'init',),
        os.path.exists('/.dockerenv'),
        os.path.exists('/.dockerinit'),
        os.getenv('container', None) is not None
    ]
    return any(checks)

if __name__ == '__main__':
    sys.exit(in_container())
