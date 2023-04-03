#!/bin/bash

i="0"

for f in "$@"; do
  j=$(wc -l <$f)
  i=$(($i + $j))
done

echo $i
