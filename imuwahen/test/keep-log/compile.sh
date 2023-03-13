#!/usr/bin/env bash
#script that compile keep-log-test
Red=$'\e[1;31m'
g++ keep-log-test.cpp ../../imuwahen.h ../../keep-log/log.cpp -o keep-log
echo $'\e[1;33m'keep-log created$'\e[0m'
echo "run ./keep-log to test program"
