#!/bin/bash


sudo apt-get update
sudo apt install python2 python2-setuptools-whl

curl https://bootstrap.pypa.io/get-pip.py --output get-pip.py
sudo python2 get-pip.py
sudo pip install virtualenv
