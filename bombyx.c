/*
** EPITECH PROJECT, 2018
** bombyx
** File description:
** bombyx function
*/

#include "../include/my.h"

int first_ex(char *str, char *str_2)
{
	float n = 0;
	float k = 0;
	float save = 0;
	int i = 1;

	n = atof(str);
	if ((n == 0 && strcmp("0", str) != 0) || n < 0) {
		printf("Invalid number\n");
		return (84);
	}
	k = atof(str_2);
	if (k == 0 || k < 0) {
		printf("Invalid growth rate\n");
		return (84);
	}
	if (k < 1 || k > 4) {
		printf("Invalid growth rate\n");
		return (84);
	}
	while (i <= 100) {
		printf("%d %.2f\n", i, n);
		save = n;
		n = (k * save) * ((1000 - save) / 1000);
		i = i + 1;
	}
	return (0);
}

void check_int(int nb)
{
	if (nb == 0) {
		printf("Invalid number\n");
		exit(84);
	}
}

void check_float(float nb)
{
	if (nb == 0) {
		printf("Ivalid growth rate\n");
		exit(84);
	}
}

int sec_ex(char *str, char *str_2, char *str_3)
{
	float n = 0;
	float k = 1;
	float save = 0;
	int i = 0;
	int i1 = 0;
	int i2 = 0;

	n = atof(str);
	if (n == 0 || n < 0) {
		printf("Ivalid growth rate\n");
		return (84);
	}
	i1 = atoi(str_2);
	if (i1 == 0 || i1 < 0) {
		printf("Invalid number\n");
		return (84);
	}
	i2 = atoi(str_3);
	if (i2 == 0 || i2 <= i1 || i2 < 0) {
		printf("Invalid number\n");
		return (84);
	}
	while (k <= 4) {
		while (i <= i1) {
			save = n;
			n = (k * save) * ((1000 - save) / 1000);
			i = i + 1;
		}
		while (i <= i2) {
			printf("%.2f %.2f\n", k, n);
			save = n;
			n = (k * save) * ((1000 - save) / 1000);
			i = i + 1;
		}
		k = k + 0.01;
		i = 0;
	}
	return (0);
}
