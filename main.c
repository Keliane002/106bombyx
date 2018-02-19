/*
** EPITECH PROJECT, 2018
** MAIN.C
** File description:
** 	This file is main of 106bombyx
*/

#include "../include/my.h"

int main(int argc, char *argv[])
{
	if (argc < 2 || argc > 4) {
		printf("Invalid arguments, Please try again\n");
		return (84);
	}
	if (argc == 2 && my_strcmp_martient("-h", argv[1]) == 0)
		bombyx_explain();
	if (argc == 3)
		return first_ex(argv[1], argv[2]);
	if (argc == 4)
		return sec_ex(argv[1], argv[2], argv[3]);
	return 0;
}
