#!/bin/bash
#BSUB -J run_all
#BSUB -o output
#BSUB -e error

for i in {1..5}; do
  for j in {1..5}; do
    dir_flow="flow-${i}-${j}"
    cd "${dir_flow}"
    bsub < run.sh
    cd ..
  done
done