#!/bin/bash

if [ $# == 1 ]; then
    grep ${1^^} | wc -l

else
    wc -l
fi
