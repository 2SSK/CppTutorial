#! /bin/bash

# NOTE: Compile the program
g++ -g -Wall ./*.cpp -o main

# NOTE: Check if the compilation was successful
if [ $? -eq 0 ]; then
     ./main
fi
