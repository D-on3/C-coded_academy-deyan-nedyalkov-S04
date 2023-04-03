#!/bin/bash

#type of shells
whereis csh
csh
bash
#which type of shell
echo $SHELL
#change the default shell to chsh
bash -s /bin/csh
#change the default shell to #!/usr/bin/env bash
chsh -s /bin/bash

#### $SHELL = WHICH SHELL IS USING THE OS BY DEFAULT
#### $PATH = DIRS FOR BINARIES
#### $HOSTNAME = HOSTNAME OF THE MACHINE
#### $HOME - HOME DIR OF THE CURRENT USER
#### env  = all the variables of the enviorment

### create ENVIORMENTAL VARIABLES
export x=3
echo $X

### local variables
b=4

## formating text

echo "$USER owes me something at $(date)"
echo '$USER owes me something at date'
echo "$USER owes me something at $(date)"

##arihmetics var=$((var2 + var3))

echo $((2 + 3))
echo $((2 < 3))
echo $((2 - 3))

man bash
#if you are searching specificly path while in man pages
##
/PATH
##=> GIVES US THE INFO
