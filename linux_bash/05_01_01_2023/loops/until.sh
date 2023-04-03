#!/bin/bash
#like do while

i="1"
until [ $i -ge 11 ]; do #Until false
  echo i is $i
  i=$(($i + 1))
done
