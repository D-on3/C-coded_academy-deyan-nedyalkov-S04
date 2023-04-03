#!/bin/bash
#should be activated manualy because
# if its activated with the script the venv will be active only in the runtime of the script

# python3 -m venv venv
##
#source venv/bin/activate

#create requierments.txt file
#pip freeze > requierments.txt
#pip install -r arequirments.txt


#Custom version
# virtualenv --python=/usr/bin/python2.6 <path/to/new/virtualenv/>
set -x -e

rm -rf venv/
python3 -m venv venv
source venv/bin/activate
pip install -r requirements.txt