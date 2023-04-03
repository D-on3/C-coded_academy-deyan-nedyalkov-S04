#!/bin/bash

test-f file1 && cat file1

#pipe

cat myfile | grep "someregularexpression" | tr '''\n' |
  sort | head
var=1 >3
if [ $var ]; then
  command1
  command2
fi
