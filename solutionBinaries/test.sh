#!/bin/bash

if [ -z $1 ] || [ -z $2 ] || [ "$#" -ne 2 ]; then
	echo "Usage: ./test.sh <your program> <solution program>"
fi

o1=$($1)
o2=$($2)

difference=`/usr/bin/diff -du <($1) <($2)`

echo "$difference"
