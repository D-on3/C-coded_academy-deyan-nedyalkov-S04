#!/bin/bash

find . -name "*.txt" | grep "some reg expression" | while read FILE; do
  mv $FILE $(sed 's/_txt/_htm/g' <$FILE)
done
for FILE in $(find . -name "*.txt" | xargs grep "some reg expression"); do
  mv $FILE $(sed 's/_txt/_htm/g' <$FILE)
done
