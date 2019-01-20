/*
** EPITECH PROJECT, 2018
** CONCAT PARAMS
** File description:
** Concat two parameters
*/

#include <stdlib.h>
#include "include/my.h"

char *concat_params(int ac, char **av)
{
    int i = 1;
    char *c = NULL;
    int j = 0;

    for (int i = 0; i < ac; i++)
        j += my_strlen(av[i]) + 1;

    c = malloc(sizeof(char) * j);
    i = 0;
    while (i < ac) {
        my_strcat(c, av[i]);
        if (i != (ac - 1))
            my_strcat(c, "\n");
        else
            my_strcat(c, "\0");
        i++;
    }
    return c;
}