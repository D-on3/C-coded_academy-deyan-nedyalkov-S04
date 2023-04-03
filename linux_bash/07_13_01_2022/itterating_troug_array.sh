#!/bin/bash

students=(Micho Pesho "Jennifer Lopez" "Doctor Kostov")
echo ${students[*]}

for name in ${students[@]}; do echo "$name"; done
