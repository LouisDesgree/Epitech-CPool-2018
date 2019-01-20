/*
** EPITECH PROJECT, 2018
** Test task10
** File description:
** Test Unit
*/

#include <criterion/criterion.h>

int my_str_isalpha(char const *str);

Test(my_str_isalpha, check_with_only_alpha_chars)
{
    cr_assert_eq(my_str_isalpha("HelloWorld"), 1);
}

Test(my_str_isalpha, check_with_some_alpha_chars)
{
    cr_assert_eq(my_str_isalpha("Hello World"), 0);
}

Test(my_str_isalpha, check_with_no_alpha_chars)
{
    cr_assert_eq(my_str_isalpha("123456"), 0);
}

Test(my_str_isalpha, check_with_empty_string)
{
    cr_assert_eq(my_str_isalpha(""), 1);
}