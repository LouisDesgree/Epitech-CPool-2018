/*
** EPITECH PROJECT, 2018
** MY APPLY ON NODES
** File description:
** Pointer to a function
*/

#include "include/mylist.h"

int my_apply_on_nodes(linked_list_t *begin, int(*f)(void *))
{
    linked_list_t *temp = begin;

    while (temp) {
        (*f)(temp->data);
        temp = temp->next;
    }
    return (0);
}