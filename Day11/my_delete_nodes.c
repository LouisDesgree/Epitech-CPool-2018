/*
** EPITECH PROJECT, 2018
** MY DELETE NODES
** File description:
** Deletes a node if the data matches the data arg
*/

#include "include/mylist.h"

int my_delete_nodes(linked_list_t **begin, void const *data_ref, int(*cmp)())
{
    linked_list_t *temp = *begin;

    while (temp) {
        if (cmp(temp->data == data_ref) == 0) {
            *begin = temp->next;
            free(temp);
            temp = *begin;
        }
        temp = temp->next;
    }
}