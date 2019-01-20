/*
** EPITECH PROJECT, 2018
** My STR STR
** File description:
** Find the first occurence of a string into another
*/

#include <unistd.h>

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        while (str[j + i] == to_find[j]) {
            if (to_find[j + 1] == '\0')
                return (&str[i]);
            j++;
        }
        i++;
    }
    return (NULL);
}