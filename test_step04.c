/*
** EPITECH PROJECT, 2018
** bombyx
** File description:
** bombyx criterion
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(test_step02_, Test_entry_10, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(sec_ex("2", "1", "-666"), 84);
}

Test(test_step02_, Test_entry_11, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(sec_ex("-1", "7", "3"), 84);
}

Test(test_step02_, Test_entry_12, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(sec_ex("1", "-1", "3"), 84);
}

Test(test_step01_, Test_entry_6, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(first_ex("-1", "666"), 84);
}

Test(test_step02_, Test_entry_14, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(sec_ex("10", "10000", "10010"), 0);
}
