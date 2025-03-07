#!/bin/bash

for i in {1..5}; do
  for j in {1..5}; do
    dir_to="flow-${i}-${j}/csv"

    cd "${dir_to}"
    python3 csv_read.py
    cd ../..
  done
done


