#!/bin/bash
j=0
for i in "$@"; do
  j=$(($j + 1))
  echo $i
done

echo $j

#to be executed with *
