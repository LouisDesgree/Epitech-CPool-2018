/*
** EPITECH PROJECT, 2018
** Test TASK08
** File description:
** Test Unit
*/

#include <criterion/criterion.h>

char *my_strupcase(char *str);

char *my_strcopy_2(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

Test(my_strupcase, check_from_min_chars)
{
    char dest[7] = {0};

    my_strcopy_2(dest, "abcdef");
    cr_assert_str_eq(my_strupcase(dest), "ABCDEF");
}

Test(my_strupcase, check_from_incompatible_chars)
{
    char dest[7] = {0};

    my_strcopy_2(dest, "123456");
    cr_assert_eq(my_strupcase(dest), NULL);
}
