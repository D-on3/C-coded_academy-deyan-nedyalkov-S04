#!/bin/bash


filename=$1

if [ ! -r "$filename" ]
then
  echo "Error : Can not read{$filename}"
  exit 1

fi

echo "Content"