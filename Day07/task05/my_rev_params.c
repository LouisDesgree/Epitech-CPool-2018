/*
** EPITECH PROJECT, 2018
** MY PRINT PARAMS
** File description:
** Print parameters from a function
*/

#include <unistd.h>
#include "my.h"

void print_all_params(int ac, char **av)
{
    int i = ac - 1;
    while (i >= 0) {
        my_putstr(av[i]);
        my_putchar('\n');
        i--;
    }
}

int main(int ac, char **av)
{
    print_all_params(ac, av);
    return (0);
}