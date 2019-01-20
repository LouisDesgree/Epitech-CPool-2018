/*
** EPITECH PROJECT, 2018
** MY SWAP
** File description:
** Simple program to swap two integers
*/

#include <unistd.h>

void my_putchar(char c);

void my_swap(int *a, int *b)
{
    int i = *a;
    *a = *b;
    *b = i;
}
