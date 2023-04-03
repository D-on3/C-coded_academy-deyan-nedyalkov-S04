##!/bin/bash
#
#filename=$1
#w1=$2
#w2=$3
#
#if grep $w1 $filename && grep $w2 $filename; then
#  echo "$w1 and $w2 are in $filename"
#elif grep $w1 $filename || grep $w2 $filename; then
#  echo "$w1 and $w2 are in $filename"
#else
#  echo "$w1 and $w2 are not in $filename"
#fi
#
#

#
#grep '^smug' # find a line that starts with smug
#grep "^$"     # line ends with given sequence


# purpose find of script searches

#wc -l for lines
#wc -c for chars/words
arg=`grep $2 $1 | wc -l`
arg2=`grep $3 $1 | wc -l`

if [ $arg -lt $arg2 ]
then
  echo "$3 is more frequent"
elif [ $arg -eq $arg2 ]; then
  echo "Equally frequent"
else
  echo "$2 is more frequent"
fi