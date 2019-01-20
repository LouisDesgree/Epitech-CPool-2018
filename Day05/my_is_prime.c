/*
** EPITECH PROJECT, 2018
** My is prime
** File description:
** Check if an int is prime, or not
*/

#include<unistd.h>

void my_putchar(char c);

int my_is_prime(int nb)
{
    int i = 2;
    if (nb == 2)
        return (1);
    if (nb < 2)
        return (0);
    while (i < nb) {
        if (i % 2 == 0)
            return (0);
        i++;
    }
    return (1);
}