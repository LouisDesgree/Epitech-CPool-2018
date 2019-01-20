/*
** EPITECH PROJECT, 2018
** MY PARAMS TO par
** File description:
** Simple program storing parameters in a struct
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/my_struct.h"

struct info_param *my_params_to_par(int ac, char **av)
{
    int i = 0;
    struct info_param ** par;
    par = malloc(sizeof(struct info_param*) + 1);

    if (par == NULL)
        return NULL;
    for (i = 0; i < ac; i++) {
        par[i] = malloc(sizeof(struct info_param));
        par[i]->length = my_strlen(av[i]);
        par[i]->str = av[i];
        par[i]->copy = my_strdup(av[i]);
        par[i]->word_array = my_str_to_word_array(av[i]);
    }
    par[i] = 0;
    return (*par);
}