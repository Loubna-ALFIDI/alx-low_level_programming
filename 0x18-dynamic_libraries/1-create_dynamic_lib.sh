#!/bin/bash

for file in *.c; do
	gcc -c -fpic "$file" -o "${file%.c}.o"
	gcc -shared -o liball.so *.o
done
