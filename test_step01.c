/*
** EPITECH PROJECT, 2018
** bombyx
** File description:
** bombyx criterion
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(test_step01_, Test_entry_NULL, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(first_ex("0", "1"), 0);
}

Test(test_step01_, Test_entry_1, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(first_ex("1", "0"), 84);
}

Test(test_step01_, Test_entry_2, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(first_ex("PTDR TKI", "3.3"), 84);
}

Test(test_step01_, Test_entry_3, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(first_ex("10", "xXmandarinedu38Xx"), 84);
}

Test(test_step01_, Test_entry_4, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(first_ex("10", "3.3"), 0);
}
