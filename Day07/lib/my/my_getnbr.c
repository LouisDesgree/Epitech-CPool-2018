/*
** EPITECH PROJECT, 2018
** My get number
** File description:
** Return an int from a string
*/

#include <unistd.h>

int	my_getnbr(char *nb)
{
    int	i = 0;
    int	res = 0;

    while (nb[i]) {
        if (nb[i] >= '0' && nb[i] <= '9') {
            res *= 10;
            res += nb[i] - '0';
        }
        else
            return (-1);
        ++i;
    }
    return (res);
}