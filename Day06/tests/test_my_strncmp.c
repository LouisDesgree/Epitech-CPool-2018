/*
** EPITECH PROJECT, 2018
** Unit Test task05
** File description:
** Test Unit
*/

#include <criterion/criterion.h>

int my_strncmp(char const *s1, char const *s2, int n);

Test(my_strcmp, check_bigger_string)
{
    cr_assert_eq(my_strncmp("abcdef", "ABCDEF", 3), 1);
}

Test(my_strcmp, check_lesser_string)
{
    cr_assert_eq(my_strncmp("ABCDEF", "abcdef", 4), -1);
}

Test(my_strcmp, check_equal_string)
{
    cr_assert_eq(my_strncmp("ABCDEF", "ABCDEF", 4), 0);
}