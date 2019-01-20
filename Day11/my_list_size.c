/*
** EPITECH PROJECT, 2018
** MY LIST SIZE
** File description:
** Returns the size of a list
*/

#include <stdlib.h>
#include "include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    linked_list_t const *current_list = begin;
    int size = 0;
    while (current_list->next != NULL) {
        current_list = current_list->next;
        size++;
    }
    return (size);
}
