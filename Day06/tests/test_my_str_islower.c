/*
** EPITECH PROJECT, 2018
** Test task12
** File description:
** Test Unit
*/

#include <criterion/criterion.h>

int my_str_islower(char const *str);

Test(my_str_islower, check_with_only_lower_alpha_chars)
{
    cr_assert_eq(my_str_islower("helloworld"), 1);
}

Test(my_str_islower, check_with_some_lower_alpha_chars)
{
    cr_assert_eq(my_str_islower("hello world"), 0);
}

Test(my_str_islower, check_with_no_lower_alpha_chars)
{
    cr_assert_eq(my_str_islower("123456"), 0);
}

Test(my_str_islower, check_with_no_char_at_all)
{
    cr_assert_eq(my_str_islower(""), 1);
}