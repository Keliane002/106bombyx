/*
** EPITECH PROJECT, 2018
** bombyx
** File description:
** bombyx criterion
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(test_step07_, Test_entry_10, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(first_ex("2", "-1"), 84);
}

Test(test_step08_, Test_entry_11, .timeout = 0.5, .exit_code = 0)
{
	cr_assert_eq(first_ex("-1", "-7"), 84);
}
