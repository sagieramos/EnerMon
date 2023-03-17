#!/usr/bin/env bash
g++ logNjson.cpp ../ilog.cpp ../imuwahen.h -o test_prog
echo "test file created... runing ./test_prog to test program\n"
ls -lh test_prog
./test_prog
