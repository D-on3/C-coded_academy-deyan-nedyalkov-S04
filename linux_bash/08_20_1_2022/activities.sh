#!/bin/bash


hobbies=("${activities[@]}")

for hobby in "${hobbies[@]}"; do echo "Hobby: $hobby"; done
hobbies[${#hobbies[@]}]=ski
