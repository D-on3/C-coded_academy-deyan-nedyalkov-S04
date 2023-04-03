#!/bin/bash
for FILE in ~/Demos/*; do
  NEWFILE=$(echo $FILE | sed 's/replace/with/g')
  if [ "$FILE" != "$NEWFILE" ]; then
    mv -i "$FILE" $NEWFILE
  fi
done
