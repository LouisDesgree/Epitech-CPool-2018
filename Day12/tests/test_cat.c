/*
** EPITECH PROJECT, 2018
** TEST CAT
** File description:
** TEST UNIT
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_cat(char *av);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_cat, check_if_file_is_a_missing)
{
    char *av = "a.c";
    cr_assert_eq(my_cat(av), 84);
}

Test(my_cat, check_if_file_is_a_dir)
{
    char *av = "test2/";
    cr_assert_eq(my_cat(av), 84);
}

Test(my_cat, check_if_cat_returns_good_value, .init=redirect_all_stdout)
{
    char *av = "test1";
    my_cat(av);
    cr_assert_stdout_eq_str("HELLO WORLD !");
}