/*
** EPITECH PROJECT, 2018
** MY SHOW WORD ARRAY
** File description:
** Display every string from an array
*/

#include "include/my.h"

int my_show_word_array(char * const *tab)
{
    int i = 0;
    while (tab[i] != 0) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
    return (0);
}