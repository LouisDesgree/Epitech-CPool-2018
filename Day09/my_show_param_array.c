/*
** EPITECH PROJECT, 2018
** MY SHOW PARAM ARRAY
** File description:
** Prints every param from an array
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/my_struct.h"

int my_show_param_array(struct info_param const *par)
{
    int i = 0;
    while (par->length != 0) {
        i++;
    }
    for (int j = 0; j < i - 1; j++) {
        my_putstr(par[i].str);
        my_putchar('\n');
        my_put_nbr(par[i].length);
        my_putchar('\n');
        my_show_word_array(par[i].word_array);
    }
    return (0);
}