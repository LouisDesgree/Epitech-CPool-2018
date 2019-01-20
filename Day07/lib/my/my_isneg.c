/*
** EPITECH PROJECT, 2018
** MY ISNEG
** File description:
** Simple prog checking if a integer is positive or negative
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0)
        my_putchar('P');
    else
        my_putchar('N');
    return (0);
}
