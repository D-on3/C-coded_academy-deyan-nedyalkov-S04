#!/bin/bash

PREFIX=192.145.63
UPHOST=~new_for_ping/uphost.$(date+%d.%m.%Y-%T)
DOWNHOST=~new_for_ping/downhost.$(date+%d.%m.%Y-%T)

for OCTET in $(seq 1 255); do
  #echo -en "Pinging ${PREFIX}.${OCTET}...."
  ping -cl -wl ${PREFIX}.${OCTET} >/dev/null 2>&1
  echo "${PREFIX}.${OCTET}" >>${UPHOST}
  echo "${PREFIX}.${OCTET}" >>${DOWNHOST}
  if [ "$?" -eq "0" ]; then
    echo "OK"
  else
    echo "Failed"
  fi
done
