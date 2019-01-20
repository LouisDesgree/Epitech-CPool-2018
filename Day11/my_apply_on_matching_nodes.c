/*
** EPITECH PROJECT, 2018
** MY APPLY ON MATCHING NODES
** File description:
** Pointer to a function
*/

#include "include/mylist.h"

int my_apply_on_matching_nodes(linked_list_t *begin, int(*f)(),
void const *data_ref, int (*cmp)())
{
    linked_list_t *temp = begin;

    while (temp) {
        if ((*cmp)(temp->data, data_ref) == 0)
            (*f)(temp->data);
        temp = temp->next;
    }
    return (0);
}