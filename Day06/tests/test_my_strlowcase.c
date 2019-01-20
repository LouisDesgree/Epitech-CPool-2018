/*
** EPITECH PROJECT, 2018
** Test TASK07
** File description:
** Test Unit
*/

#include <criterion/criterion.h>

char *my_strlowcase(char *str);

char *my_strcopy_3(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

Test(my_strlowcase, check_from_maj_chars)
{
    char dest[7] = {0};

    my_strcopy_3(dest, "ABCDEF");
    cr_assert_str_eq(my_strlowcase(dest), "abcdef");
}

Test(my_strlowcase, check_from_incompatible_numbers)
{
    char dest[7] = {0};

    my_strcopy_3(dest, "123456");
    cr_assert_eq(my_strlowcase(dest), NULL);
}
