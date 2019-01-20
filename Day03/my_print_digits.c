/*
** EPITECH PROJECT, 2018
** MY PRINT DIGITS
** File description:
** Simple program printing digits
*/

#include<unistd.h>

void my_putchar(char c);

int my_print_digits(void)
{
    char base = '0';
    char end = '9';

    while (base <= end){
	    my_putchar(base);
	    base++;
    }
    return (0);
}
