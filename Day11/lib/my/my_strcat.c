/*
** EPITECH PROJECT, 2018
** My STR CAT
** File description:
** Copy a string at the end of another
*/

#include <unistd.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = my_strlen(dest);
    while (src[i] != '\0') {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}