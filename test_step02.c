/*
** EPITECH PROJECT, 2018
** bombyx
** File description:
** bombyx criterion
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(test_step02_, Test_entry_NULL, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(sec_ex("0", "1", "2"), 84);
}

Test(test_step02_, Test_entry_1, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(sec_ex("1", "0", "3"), 84);
}

Test(test_step02_, Test_entry_2, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(sec_ex("1", "1", "0"), 84);
}

Test(test_step02_, Test_entry_3, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(sec_ex("lol", "1", "2"), 84);
}

Test(test_step02_, Test_entry_4, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(sec_ex("1", "lol", "2"), 84);
}
