#!/bin/bash
#BSUB -J run_all
#BSUB -o output
#BSUB -e error

for i in {1..17}; do
  for j in {1..11}; do
    dir_case="case-${i}-${j}"
    cd "${dir_case}"
    bsub < run.sh
    cd ..
  done
done