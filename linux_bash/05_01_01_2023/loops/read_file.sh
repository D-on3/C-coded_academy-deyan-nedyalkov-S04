#!/bin/bash
#run with argument type file
filename=$1
if [ ! -r "$filename" ]; then
  echo "Error: Can not open file"
  exit 1
fi

echo "Content of file ${filename}:"
while read myline; do
  echo "$myline"
done <$filename
echo "End of ${filename}"
