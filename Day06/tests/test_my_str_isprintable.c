/*
** EPITECH PROJECT, 2018
** Test Task 13
** File description:
** Test Unit
*/

#include <criterion/criterion.h>

int my_str_isprintable(char const *str);

Test(my_str_isprintable, check_with_only_printable_chars)
{
    cr_assert_eq(my_str_isprintable("ABC123"), 1);
}

Test(my_str_isprintable, check_with_some_printable_chars)
{
    cr_assert_eq(my_str_isprintable("ABC 123"), 0);
}

Test(my_str_isprintable, check_with_no_printable_chars)
{
    cr_assert_eq(my_str_isprintable(" "), 0);
}

Test(my_str_isprintable, check_with_empty_quotes)
{
    cr_assert_eq(my_str_isprintable(""), 1);
}