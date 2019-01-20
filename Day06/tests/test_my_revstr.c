/*
** EPITECH PROJECT, 2018
** Test Task03
** File description:
** Test unit
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

char *my_strcopy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

Test(my_revstr, return_value_is_reversed)
{
    char dest[6] = {0};

    my_strcopy(dest, "Hello");
    cr_assert_str_eq(my_revstr(dest), "olleH");
}