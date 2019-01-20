/*
** EPITECH PROJECT, 2018
** My STR IS LOWER
** File description:
** Check if a string is lowercase
*/

#include <unistd.h>

int my_str_islower(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            i++;
        else
            return (0);
    }
    return (1);
}