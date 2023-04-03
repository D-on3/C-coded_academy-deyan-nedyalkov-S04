#!/bin/bash

i="0"

for f in "$*"; do # cant be executed because of $*
  j=$(wc -l <$f)
  i=$(($i + $j))
done

echo $i
