/*
** EPITECH PROJECT, 2018
** My REV STR
** File description:
** Reverses a string
*/

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_revstr(char *str)
{
    char old;
    int i = 0;
    int length = my_strlen(str) - 1;

    while (i < length) {
        old = str[i];
        str[i] = str[length];
        str[length] = old;
        i++;
        length--;
    }
    return (str);
}