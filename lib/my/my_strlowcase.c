/*
** EPITECH PROJECT, 2017
** my_strlowcase.c
** File description:
** Function hat puts every letters of every worlds in lowercase.
*/

#include <my.h>

char *my_strlowcase(char *str)
{
	int k = 0;

	while (str[k] != '\0') {
		if (k >= 'A' && k <= 'Z') {
			str[k] = str[k] + 32;
			my_putchar(k);
		}
		k += 1;
	}
	return (str);
}
