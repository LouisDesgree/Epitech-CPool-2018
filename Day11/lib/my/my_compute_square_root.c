/*
** EPITECH PROJECT, 2018
** My compute square root
** File description:
** Finding the square root of a given number
*/

#include<unistd.h>

void my_putchar(char c);

int my_compute_square_root(int nb)
{
    int i = 0;
    while (i * i != nb) {
        if (i * i > nb)
            return (0);
        else
            i++;
    }
    return (i);
}