/*
** EPITECH PROJECT, 2018
** My STR IS PRINTABLE
** File description:
** Check if a char is printable or not (according to ASCII table)
*/

#include <unistd.h>

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 32 && str[i] < 127)
            i++;
        else
            return (0);
    }
    return (1);
}