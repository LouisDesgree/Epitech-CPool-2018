/*
** EPITECH PROJECT, 2018
** MY FIND NODE
** File description:
** Finds the first reference into a node and returns it
*/

#include "include/mylist.h"

linked_list_t *my_find_node(linked_list_t const *begin, void const *data_ref,
int(*cmp)())
{
    linked_list_t *temp = begin;
    while (temp) {
        if (cmp(temp->data, data_ref) == 0)
            return (temp);
        temp = temp->next;
    }
}