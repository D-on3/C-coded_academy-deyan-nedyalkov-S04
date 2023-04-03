#!/bin/bash


valgrind --leak-check=full  --show-leak-kinds=all -s cmake-build-debug/starcraft
