#!/bin/bash

if [ -n "$1" ]; then

	blih -u prenom.nom@epitech.eu repository create "$1"

	blih -u prenom.nom@epitech.eu repository setacl "$1" ramassage-tek r

	blih -u prenom.nom@epitech.eu repository getacl "$1"
fi
