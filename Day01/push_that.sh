#!/bin/bash

if [ $# != 0 ]; then

	git add --all
	git commit -m "$*"
	git push origin master
else
	echo "Please provide commit description"
fi




