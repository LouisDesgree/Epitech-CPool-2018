/*
** EPITECH PROJECT, 2018
** MY PRINT ALPHA
** File description:
** Printing the alphabet
*/
#include <unistd.h>

void my_putchar(char c);

int my_print_alpha(void)
{
    char letter = 'a';
    char end = 'z';

    while (letter <= end){
        my_putchar(letter);
        letter++;
    }
    return (0);
}
