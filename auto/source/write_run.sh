#!/bin/bash
#BSUB -o output
#BSUB -e error

for i in {2..5}; do
  for j in {1..5}; do
    cat > flow-${i}-${j}/template/run.sh <<EOF
#!/bin/bash
#BSUB -J snap_${i}_${j}
#BSUB -m 'becker3'

scalarSimpleFoam
EOF
  done
done