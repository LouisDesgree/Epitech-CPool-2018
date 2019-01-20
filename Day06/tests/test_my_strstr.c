/*
** EPITECH PROJECT, 2018
** Test Unit task04
** File description:
** Test Unit
*/

#include<criterion/criterion.h>

char *my_strstr(char *str, char const *to_find);

Test(my_strstr, check_for_single_char_occurence)
{
    cr_assert_str_eq(my_strstr("Hello", "lo"), "lo");
}

Test(my_strstr, check_for_multiple_chars_occurence)
{
    cr_assert_str_eq(my_strstr("HelloWorld", "Hello"), "HelloWorld");
}

Test(my_strstr, check_for_no_occurence)
{
    cr_assert_eq(my_strstr("HelloWorld", "Foobar"), NULL);
}