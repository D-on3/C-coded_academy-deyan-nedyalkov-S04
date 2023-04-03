#!/bin/bash

read -p "What file do you want to test" filename
if [ ! -e "$filename" ]; then
  echo "The file does not exist"

fi

#Okay the file exists
ls -ld "$filename"
if [ -L "$filename" ]; then
  echo "$filename is symbolic"
elif [ -f "$filename" ]; then
  echo "$filename is regular file"

elif [ -d "$filename" ]; then
  echo "$filename is regular file"
elif [ -b "$filename" ]; then

  echo "$filename is block  device"
elif [ -c "$filename" ]; then
  echo "$filename is char  device"
else
  echo "I dont know what kind of file is this.Is this a linux sys"
fi
