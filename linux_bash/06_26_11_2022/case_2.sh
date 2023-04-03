#!/bin/bash
read -p "Give  me a word:   " input
echo -en "You gave me some "

#the & executes all the cases in this case

case $input in
*[[:lower:]]*) echo -en "Lowercase\\" ;;&
*[[:upper:]]*) echo -en "Uppercase\\" ;;&
*[[:digit:]]*) echo -en "Numerical" ;;
*) echo "input" ;;

esac
