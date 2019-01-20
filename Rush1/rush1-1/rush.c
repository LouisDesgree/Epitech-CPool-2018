/*
** EPITECH PROJECT, 2018
** CPool_rush1-1_2018
** File description:
** display a square with o----o
*/

#include <unistd.h>

void my_putchar(char c);

int is_angle(int nb, int x, int y)
{
    if (nb == 0)
        return (1);
    else if (nb == x - 1)
        return (1);
    else if (nb == (x * y) - x)
        return (1);
    else if (nb == (x - 1) + (x*y) - x)
        return (1);
    else
        return (0);
}

int is_x_sep(int nb, int x, int y)
{
    if (nb > 0 && nb < x - 1)
        return (1);
    else if ((nb > (x * y) - x) && nb < (x - 1) + (x * y) - x)
        return (1);
    else
        return (0);
}

void rush(int x, int y)
{
    int i = 0;
    if (x <= 0 || y <= 0)
        write(2, "Invalid size\n", 14);
    while (i < x*y) {
        if (i % x == 0 && i != (x*y) && i != 0)
            my_putchar('\n');
        if (is_angle(i, x, y))
            my_putchar('o');
        else if (is_x_sep(i, x, y))
            my_putchar('-');
        else if (i % x == 0 || (i > x && (i + 1) % x == 0))
            my_putchar('|');
        else
            my_putchar(' ');
        i++;
    }
}