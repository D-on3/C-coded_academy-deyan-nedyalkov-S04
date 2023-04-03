#!/bin/bash

grep -i hobb activites2.sh
hobbies=("${activities[@]}")
for hobby in "${hobbies[@]}"; do
  echo "Hobby: $hobby"
done
hobbies=("${activities[@]}" diving)
for hobby in "${hobbies[@]}"; do echo "Hobby: $hobby"; done
hobbies[${#hobbies[@]}]=ski
for hobby in "${hobbies[@]}"; do
  echo "Hobby: $hobby"
done
