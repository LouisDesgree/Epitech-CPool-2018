/*
** EPITECH PROJECT, 2018
** My compute factorial rec
** File description:
** Recursive function for returning factorial
*/

#include<unistd.h>

void my_putchar(char c);
int my_put_nbr(int nb);

int my_compute_factorial_rec(int nb)
{
    int res;
    if (nb == 0)
        return (1);
    if (nb < 0 || nb > 12)
        return (0);
    res = nb * my_compute_factorial_rec(nb - 1);
    return res;
}