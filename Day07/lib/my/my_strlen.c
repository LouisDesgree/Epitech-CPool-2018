/*
** EPITECH PROJECT, 2018
** MY STRLEN
** File description:
** Print length of a string
*/

#include <unistd.h>

void my_putchar(char c);

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
