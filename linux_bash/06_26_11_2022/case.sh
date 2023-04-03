#!/bin/bash
read -p "What is your favorite fruit:   " fruit
case $fruit in
orange)
  echo "The $fruit is orange:"
  echo "The $fruit is sour"
  ;;
banana) echo "The $fruit is yelllow" ;;
pear) echo "The $fruit is green" ;;
*) echo "I don't know what colour is  $fruit is" ;;

esac
