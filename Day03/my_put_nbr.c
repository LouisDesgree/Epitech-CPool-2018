/*
** EPITECH PROJECT, 2018
** MY PUT NBR
** File description:
** Printing every char from an int
*/

#include <unistd.h>

void my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb < 0) {
	    my_putchar('-');
	    nb = -nb;
    }

    if (nb > 9)
	    my_put_nbr(nb / 10);
    my_putchar(nb % 10 + '0');
    return (0);
}
