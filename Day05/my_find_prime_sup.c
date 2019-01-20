/*
** EPITECH PROJECT, 2018
** My find prime sup
** File description:
** Gets the nearest prime number for the argument
*/

#include <unistd.h>

void my_putchar(char c);
int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    while (my_is_prime(nb) == 0) {
        nb++;
    }
    return nb;
}