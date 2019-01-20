/*
** EPITECH PROJECT, 2018
** Test Unit task09
** File description:
** Test Unit
*/

#include<criterion/criterion.h>

char *my_strcapitalize(char *str);

char *my_strcopy_4(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

Test(my_strcapitalize, test_caps)
{
    char dest[48] = {0};
    char *result = ("Hey, How Are You? 42words Forty-Two; Fifty+One");

    my_strcopy_4(dest, result);
    cr_assert_str_eq(my_strcapitalize(dest), result);
}

Test(my_strcapitalize, test_full_caps)
{
    char dest[12] = {0};

    my_strcopy_4(dest, "HELLO WORLD");
    cr_assert_str_eq(my_strcapitalize(dest), "Hello World");
}