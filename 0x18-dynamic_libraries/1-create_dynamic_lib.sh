#!/bin/bash

for file in *.c; do
    gcc -c -fpic "$file" -o "${file%.c}.o"
    gcc -shared "$file" -o liball.so
done