#!/bin/bash
#BSUB -J copy_cases
#BSUB -o output
#BSUB -e error

dir_from="base"

for i in {1..5}; do
  for j in {1..5}; do
    dir_to="flow-${i}-${j}"
    file_old="${dir_to}/template/system/blockMeshDict_${i}_${j}"
    file_new="${dir_to}/template/system/blockMeshDict"

    cp -r "${dir_from}" "${dir_to}"
    mv "${file_old}" "${file_new}"
  done
done