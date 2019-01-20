/*
** EPITECH PROJECT, 2018
** MY EVIL STR
** File description:
** Simple function reversing a string
*/

#include <unistd.h>

void my_putchar(char c);
int my_strlen(char const *str);

char *my_evil_str(char *str)
{
    char old;
    int cur = 0;
    int len = my_strlen(str) - 1;

    while (cur < len) {
        old = str[cur];
        str[cur] = str[len];
        str[len] = old;
        cur = cur + 1;
        len = len - 1;
    }
    return (str);
}

