#!/bin/bash

# grep option -A after
# grep option -B before

#hobibies=("${activities[@]}")
#for hobby in "${activities[@]}" do
#    echo "Hobby:$hobby"
#done

man grep


ls | grep [[:digit:]]


# if we have ^ we exclude the given symbol or sequence

ls | grep [^az]

# symbols  * >= 0
# symbols \? 0 or 1
# symbols \+  >=1
# grep '[[:alpha:]]\+a'


grep 't*a' 11.c

# ^ is the begining of ffile
#
#ls -l | '^l'

grep -o '[0-9]]\{3\}-\{0,1\}[0-9]\{2\}-{0,1\}[0-9]\{4\}'
