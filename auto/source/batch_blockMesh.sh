#!/bin/bash
#BSUB -J blockMesh
#BSUB -o output
#BSUB -e error

for i in {1..5}; do
  for j in {1..5}; do
    cd "flow-${i}-${j}/template"
    blockMesh
    cd ../..
  done
done