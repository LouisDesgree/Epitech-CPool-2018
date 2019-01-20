/*
** EPITECH PROJECT, 2018
** Test task11
** File description:
** Test Unit
*/

#include <criterion/criterion.h>

int my_str_isnum(char const *str);

Test(my_str_isnum, check_with_only_alpha_chars)
{
    cr_assert_eq(my_str_isnum("0123456789"), 1);
}

Test(my_str_isnum, check_with_some_alpha_chars)
{
    cr_assert_eq(my_str_isnum("01234 56789"), 0);
}

Test(my_str_isnum, check_with_no_alpha_chars)
{
    cr_assert_eq(my_str_isnum("ABCDEF"), 0);
}

Test(my_str_isnum, check_with_empty_quotes)
{
    cr_assert_eq(my_str_isnum(""), 1);
}