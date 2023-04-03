#!/bin/bash

#combining tests

if [ ! -r "$1" ]; then
  echo "ErroR : $1 NOT A READABLE FILE "
  echo "Quitting."
  exit 1

else
  cat "$1"
fi
