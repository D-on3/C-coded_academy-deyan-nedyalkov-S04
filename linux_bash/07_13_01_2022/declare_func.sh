#!/bin/bash

declare -i NUMBER_ACCOUNTS=15
echo $NUMBER_ACCOUNTS
15
NUMBER_ACCOUNTS="Miro" # mistake
echo $NUMBER_ACCOUNTS


NUMBER_ACCOUNTS=0X0FFFF
echo $NUMBER_ACCOUNTS
65535
printf "%d\n" "$NUMBER_ACCOUNTS"
65535



GOSHO="Georgi Ivanov"
declare -p GOSHO
declare -- GOSHO="Georgi Ivanov"


declare -a PRODUCTS
PRODUCTS[0]=KASHKAVAL
PRODUCTS[1]=SIRENE

for((i=0; i < 2; i++)); do echo "${PRODUCTS[i]}"; done


read -a dice


fruits=(apple grapefruit strawberry banana orange pear watermelon)
echo ${#fruits[@]}

