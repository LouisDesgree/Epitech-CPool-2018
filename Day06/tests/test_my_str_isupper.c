/*
** EPITECH PROJECT, 2018
** Test task13
** File description:
** Test Unit
*/

#include <criterion/criterion.h>

int my_str_isupper(char const *str);

Test(my_str_isupper, check_with_only_upper_alpha_chars)
{
    cr_assert_eq(my_str_isupper("HELLOWORLD"), 1);
}

Test(my_str_isalpha, check_with_some_upper_alpha_chars)
{
    cr_assert_eq(my_str_isupper("HELLO WORLD"), 0);
}

Test(my_str_isalpha, check_with_no_upper_alpha_chars)
{
    cr_assert_eq(my_str_isupper("123456"), 0);
}

Test(my_str_isalpha, check_with_no_upper_char_at_all)
{
    cr_assert_eq(my_str_isupper(""), 1);
}