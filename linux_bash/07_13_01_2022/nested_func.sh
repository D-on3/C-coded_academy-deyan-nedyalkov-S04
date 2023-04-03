#!/bin/bash
firstFunc() {
  echo "This is the first function ..."
  secondFunc
}
secondFunc() {
  echo "This is second Func ..."
}
firstFunc
