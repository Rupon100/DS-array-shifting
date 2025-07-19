#!/bin/bash
for f in *.c; do
  exe="${f%.c}.out"
  clang "$f" -o "$exe" && echo "Running $exe" && ./"$exe"
  echo "--------------------------"
done
