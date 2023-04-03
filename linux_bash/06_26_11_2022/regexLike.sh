#!/bin/bash
read name

[[ $name = a* ]] || echo "name does not start with 'a' :$name "
