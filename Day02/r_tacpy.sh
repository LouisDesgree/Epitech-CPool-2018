#!/bin/bash

if [ -n "$MY_LINE1" ] && [ -n "$MY_LINE2" ]; then

    sed 's/:..*//' | sed '1~2d' | rev | sort -r | sed -n $MY_LINE1','$MY_LINE2'p' | sed -z 's/\n/, /g' | sed -r 's/(.*), /\1.\n/g' 

else

    echo "Please add ENV var"

fi
