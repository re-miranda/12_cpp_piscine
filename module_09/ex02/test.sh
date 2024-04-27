#!/bin/bash

echo "# Small test:"
./PmergeMe 3 5 9 7 4
echo "# Big test:"
./PmergeMe `shuf -i 1-100000 -n 3000 | tr "\n" " "`
echo "# Negative input test:"
./PmergeMe "-1" "2"
echo "# For OSX USER:"
./PmergeMe `jot -r 3000 1 100000 | tr '\n' ' '`
