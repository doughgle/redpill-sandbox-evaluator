#!/bin/bash
# bootstraps Redpill on Detux (https://detux.org/index.php)

export R=`./run-tests.sh`
wget -nv --post-data="sprunge=$R" http://sprunge.us; cat index.html
