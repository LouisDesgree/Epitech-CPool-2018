/*
** EPITECH PROJECT, 2018
** MY STR TO WORD ARRAY
** File description:
** Print a string to an array
*/

#include <stdlib.h>

void my_putchar(char c);
int my_putstr(char const *str);
char *my_strncpy(char *dest, char const *src, int n);

int is_char_printable(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    else if (c >= 'A' && c <= 'Z')
        return (1);
    else if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int count_words(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_char_printable(str[i]) == 1 && is_char_printable(str[i+1]) == 0)
            count++;
    }
    return (count);
}

char **my_str_to_word_array(char const *str)
{
    char **res = malloc((count_words(str) + 1) * sizeof(char *));
    int length = 0;
    int j = 0;

    if (res == NULL)
        return (NULL);

    for (int i = 0; str != NULL && str[i] != '\0'; i++) {
        if (is_char_printable(str[i]))
            length++;
        if (is_char_printable(str[i]) && is_char_printable(str[i+1]) == 0) {
            res[j] = malloc(length + 1);
            my_strncpy(res[j], &str[i - length + 1], length);
            length = 0;
            j++;
        }
    }
    res[j] = NULL;
    return (res);
}
