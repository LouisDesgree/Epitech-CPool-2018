/*
** EPITECH PROJECT, 2018
** MY PUT STR
** File description:
** Printing every char from a string
*/

#include <unistd.h>

void my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
