/*
** EPITECH PROJECT, 2018
** BOMBYX_EXPLAIN.C
** File description:
** 	This file is use for explain usage
*/

#include "../include/my.h"

void bombyx_explain(void)
{
	printf("USAGE\n           ./106bombyx n [k|iOi1]\n\nDESCRIPTION\n");
	printf("           n   number of first generation individuals\n");
	printf("           k   growth rate from 1 to 4\n");
	printf("           iO  initial generation (included)\n");
	printf("           i1  final generation (included)\n");
}


int my_strcmp_martient(char const *s1, char const *s2)
{
	int i = 0;

	if (strlen(s1) == strlen(s2)) {
		while (s1[i] != '\0' && s2[i] != '\0') {
			if (s1[i] < s2[i])
				return -1;
			else if (s1[i] > s2[i])
				return 1;
			else
				i++;
		}
		return 0;
	}
	return -1;
}
