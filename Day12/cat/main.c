/*
** EPITECH PROJECT, 2018
** MAIN
** File description:
** MAIN FILE
*/

#include "my.h"
#include "cat.h"

int main(int ac, char **av)
{
    if (ac < 2) {
        infinite_cat();
    }
    for (int i = 1; i < ac; i++) {
        my_cat(av[i]);
    }
}