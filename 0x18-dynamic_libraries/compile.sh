#!/bin/bash

# Compile all .c files into .o files with the same base name
for file in *.c; do
    gcc -c -fpic "$file" -o "${file%.c}.o"
done