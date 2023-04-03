#!/bin/bash

function check() {
  local res=$(($1))
  echo $res
  if [ "${res}" -eq 63 ]; then
    echo "function check hello returns status $res"
  else
    echo "function check hello DOES NOT return status $res == 63"
  fi
}
hello Miroslav Avramov
check $?
