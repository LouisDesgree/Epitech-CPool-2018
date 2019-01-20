#!/bin/bash

if [ $# == 1 ]; then
    grep -E " $1" | wc -l
else
    echo "Error, please provide argument"
fi
