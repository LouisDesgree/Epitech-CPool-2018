/*
** EPITECH PROJECT, 2018
** MY STRDUP
** File description:
** Make a string writable
*/

#include <stdlib.h>
#include "include/my.h"

char *my_strdup(char const *src)
{
    char *c = malloc(sizeof(char) * my_strlen(src) + 1);

    if (c == NULL)
        return NULL;
    my_strcpy(c, src);
    return (c);
}