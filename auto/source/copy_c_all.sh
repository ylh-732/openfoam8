#!/bin/bash

mkdir "data"
for i in {1..5}; do
  for j in {1..5}; do
    file_from="flow-${i}-${j}/csv/c_all.npy"
    file_to="data/c_all_${i}_${j}.npy"

    cp -r "${file_from}" "${file_to}"
  done
done