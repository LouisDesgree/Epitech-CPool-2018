/*
** EPITECH PROJECT, 2018
** MY PUTCHAR
** File description:
** Write a char on the standard output
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
