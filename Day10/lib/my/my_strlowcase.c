/*
** EPITECH PROJECT, 2018
** My STR LOWCASE
** File description:
** Convert a string to itself in lowercase
*/

#include <unistd.h>

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return (str);
}