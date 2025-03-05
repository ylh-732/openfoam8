#!/bin/bash
#BSUB -J copy_cases
#BSUB -o output
#BSUB -e error

dir_from="template"

for i in {1..35}; do
  for j in {1..23}; do
    dir_to="case-${i}-${j}"
    file_source_properties="${dir_to}/constant/sourceProperties"

    cp -r "${dir_from}" "${dir_to}"
 
    new_x_source=$(printf "%.1f" $(echo "0.5 * $i" | bc))
    new_y_source=$(printf "%.1f" $(echo "0.5 * $j" | bc))
    echo "x_source             x_source [0 1 0 0 0 0 0] $new_x_source;" >> "$file_source_properties"
    echo "y_source             y_source [0 1 0 0 0 0 0] $new_y_source;" >> "$file_source_properties"
  done
done