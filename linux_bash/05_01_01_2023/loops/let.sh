#!/bin/bash

VAR=10
RES=2
let VAR=$VAR +11
echo $VAR

let VAR=$VAR +$RES
echo $VAR

let VAR++
echo $VAR

#let calculates all the values
#let doesnt gives us the option the string to be empyu

i=1
i=$((i + 1))
echo $i
let "i = $i + 1"
echo "i=i + 1"
echo $i
let i=$i+1
echo $VAR
