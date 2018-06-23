/*
** EPITECH PROJECT, 2017
** my_strupcase.c
** File description:
** Function hat puts every letters of every worlds in uppercase.
*/

#include <my.h>

char *my_strupcase(char *str)
{
	int k;

	while (str[k] != '\0') {
		if (k >= 'a' && k <= 'z') {
			str[k] = str[k] - 32;
			my_putchar(k);
		}
		k += 1;
	}
	return (str);
}
