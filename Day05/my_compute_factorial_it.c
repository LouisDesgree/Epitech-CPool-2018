/*
** EPITECH PROJECT, 2018
** My compute factorial it
** File description:
** Returns the factorial of a number given as parameter
*/

#include<unistd.h>

void my_putchar(char c);
void my_put_nbr(int nb);

int is_factorable(int nb)
{
    if (nb >= 0 && nb <= 12)
        return (1);
    else
        return (0);
}

int my_compute_factorial_it(int nb)
{
    int i = 1;
    int j = 1;
    if (is_factorable(nb)) {
        while (j <= nb) {
            i = i * nb;
            nb--;
        }
    }
    else
        i = 0;
    return (i);
}