/*
** EPITECH PROJECT, 2018
** MY STRDUP
** File description:
** Make a string writable
*/

#include <stdlib.h>

int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *src)
{
    char *c = malloc(sizeof(char) * my_strlen(src) + 1);

    if (c == NULL)
        return NULL;
    my_strcpy(c, src);
    return (c);
}