OB/*
** EPITECH PROJECT, 2018
** MY PRINT COMB
** File description:
** Hard script doing crazy things with numbers
*/

#include <unistd.h>

void my_putchar(char c);

void print_third_digit(char a, char b, char c)
{
    while (c <= '9') {
        my_putchar(a);
        my_putchar(b);
        my_putchar(c);
        my_putchar(',');
        my_putchar(' ');
        c++;
    }
}

void print_second_digit(char a, char b, char c)
{
    while (b <= '8') {
        print_third_digit(a, b, c);
        b++;
        c = b + 1;
    }
}

int	print_combos(char a, char b, char c)
{
	while (a <= '6') {
		print_second_digit(a, b, c);
		a++;
		b = a + 1;
		c = b + 1;
	}
	return (0);
}

int	my_print_comb(void)
{
	print_combos('0', '1', '2');
	my_putchar('7');
	my_putchar('8');
	my_putchar('9');
	return (0);
}
