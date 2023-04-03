 #! /bin/bash
# Purpose of Script: Searches a file for two strings and prints which
#is more frequent
# Usage: ./ifeq.sh <file> string1 string2
arg=$(grep $2 $1 | wc -l)
arg2=$(grep $3 $1 | wc -l)
if [ $arg -lt $arg2 ]; then
  echo "$3 is more frequent"
elif [ $arg -eq $arg2 ]; then
  echo "Equally frequent"
else
  echo "$2 is more frequent"
fi
