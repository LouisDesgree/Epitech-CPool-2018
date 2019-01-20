/*
** EPITECH PROJECT, 2018
** MY PRINT REVALPHA
** File description:
** Printing the alphabet, but reversed
*/
#include <unistd.h>

void my_putchar(char c);

int my_print_revalpha(void)
{
    char letter = 'z';
    char end = 'a';

    while (letter >= end) {
        my_putchar(letter);
        letter--;
    }
    return (0);
}
