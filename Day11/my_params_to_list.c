/*
** EPITECH PROJECT, 2018
** MY PARAMS TO LIST
** File description:
** Put parameters into a chained list
*/

#include <stdlib.h>
#include "include/mylist.h"

int add_arg_to_list(linked_list_t **list, char *arg)
{
    linked_list_t *list2;
    list2 = malloc(1 * sizeof(*list2));
    if (list2 == NULL)
        return (1);
    list2->data = arg;
    list2->next = *list;
    *list = list2;
    return (0);
}

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *list = NULL;
    for (int i = 0; i <= (ac - 1); i++) {
        add_arg_to_list(&list, av[i]);
    }
    return list;
}
