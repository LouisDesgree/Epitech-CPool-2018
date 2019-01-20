/*
** EPITECH PROJECT, 2018
** Test Unit Task01
** File description:
** Unit tests
*/

#include <criterion/criterion.h>

char *my_strcpy(char *dest, char const *src);

Test(my_strcpy, copy_string_in_empty_array)
{
    char dest[6] = {0};

    my_strcpy(dest, "Hello");
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strcpy, copy_string_in_empty_array_return_value)
{
    char dest[6] = {0};
    char *copy = my_strcpy(dest, "World");

    cr_assert_str_eq(copy, "World");
}

Test(my_strcpy, copy_big_string_in_filled_array)
{
    char dest[6] = "World";

    my_strcpy(dest, "ABCDEFGHIJKLMNOPQRSTU");
    cr_assert_str_eq(dest, "ABCDEFGHIJKLMNOPQRSTU");
}