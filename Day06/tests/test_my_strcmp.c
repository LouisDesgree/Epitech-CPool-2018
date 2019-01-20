/*
** EPITECH PROJECT, 2018
** Unit Test task05
** File description:
** Test Unit
*/

#include <criterion/criterion.h>

int my_strcmp(char const *s1, char const *s2);

Test(my_strcmp, check_bigger_string)
{
    cr_assert_eq(my_strcmp("abcdef", "ABCDEF"), 1);
}

Test(my_strcmp, check_lesser_string)
{
    cr_assert_eq(my_strcmp("ABCDEF", "abcdef"), -1);
}

Test(my_strcmp, check_equal_string)
{
    cr_assert_eq(my_strcmp("ABCDEF", "ABCDEF"), 0);
}