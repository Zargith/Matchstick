/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** Function that reverse what it contain a str.
*/

#include <my.h>

char *my_revstr(char *str)
{
	int a;
	int b;

	a = 0;
	b = my_strlen(str) -1;
	while (a < b) {
		my_swap(&a, &b);
		a = a + 1;
		b = b - 1;
	}
	return (str);
}
