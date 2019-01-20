/*
** EPITECH PROJECT, 2018
** My STRNCAT
** File description:
** Copy a string at the end of another, taking only n chars
*/

#include <unistd.h>

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = my_strlen(dest);
    while (i < nb && src[i] != '\0') {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}