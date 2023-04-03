#!/bin/bash
func() {
  local loc_var=23
  echo "loc_var in function = $loc_var"
  global_var=999
  echo "global_var in function = $global_var"
}
echo "Before function call our vars are $loc_var and $global_var”
func
echo "loc_var outside function = $loc_var"
echo "global_var outside function = $global_var”
