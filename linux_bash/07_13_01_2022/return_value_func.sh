#!/bin/bash
function hello() {
  echo "Hello $1 $2"
  return 63
}
hello $1 $2
ret=$?
echo "Return value is $ret"
