/*
** EPITECH PROJECT, 2018
** TEST MY PUT NBR
** File description:
** Quick function checking some script
*/

#include <unistd.h>

void my_putchar(char c);
int my_put_nbr(int nb);

int main(void)
{
    my_put_nbr(0);
    my_put_nbr(42);
    my_put_nbr(-42);
    my_put_nbr(-2147483647);
    my_put_nbr(2147483647);
    return (0);
}
