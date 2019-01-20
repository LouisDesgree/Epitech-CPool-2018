/*
** EPITECH PROJECT, 2018
** MY PRINT COMB2
** File description:
** Another hard script doing crazy things with numbers
*/

#include <unistd.h>

void my_putchar(char c);

void increm_num(char *c, char *d)
{
    if (*d < '9')
	*d = *d + 1;
    else {
        *c = *c + 1;
	*d = '0';
    }
}

void print_res(char c, char d, char e, char f)
{
    my_putchar(c);
    my_putchar(d);
    my_putchar(' ');
    my_putchar(e);
    my_putchar(f);

    if (c == '9' && d == '8' && e == '9' && f == '9'){}
    else {
	    my_putchar(',');
	    my_putchar(' ');
    }
}

void print_num()
{
    char c = '0';
    char d = '0';
    char e = '0';
    char f = '1';

    while (c <= '9' && d <= '9') {
        while (e <= '9' && f <= '9') {
            print_res(c, d, e, f);
            increm_num(&e, &f);
        }
        increm_num(&c, &d);
        f = d + 1;
        e = c;
    }
}

int my_print_comb2(void)
{
    print_num();
    return (0);
}
