#!/usr/bin/env bash
#script that compile keep-log-test
Red=$'\e[1;31m'
g++ json.cpp ../../imuwahen.h ../../json.cpp -o test-json
echo $'\e[1;33m'test-json created$'\e[0m'
echo "run ./test-json to test program"
