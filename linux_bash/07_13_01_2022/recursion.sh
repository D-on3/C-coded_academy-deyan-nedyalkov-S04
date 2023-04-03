#! /bin/bash
function funls() {
  local f
  for f in $(ls); do
    if [ -d "$f" ]; then
      echo "Directory $f"
      cd $f
      funls
      echo "End directory $f"
      cd ..
    else
      echo $f
    fi
  done
}

funls
