#!/bin/bash
students=(Micho Pesho 'Jennifer Lopez' "Doctor Kostov")
course=(1 2 3 4 2 3)
i=0
for name in ${students[*]}; do
  echo "$name ${course[$(($i))]}"
  i=$(($i + 1))
done
