#!/bin/bash
declare -A matrix
num_rows=4
num_columns=5
for ((i = 1; i <= num_rows; i++)); do
  for ((j = 1; j <= num_columns; j++)); do
    matrix[$i, $j]=$RANDOM
  done
done
