/*
** EPITECH PROJECT, 2017
** my_str_islower.c
** File description:
** Check if there is only lowercase char on the str.
*/

#include <my.h>

int alpha(char const *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		return (0);
	else
		return (1);
}

int my_str_islower(char const *str)
{
	int f = 0;
	int a = 0;

	while (str[f] != '\0' && a == 0) {
		a = alpha(str, f);
		f = f + 1;
	}
	if (a == 0 || str[0] == '\0')
		return (1);
	else
		return (0);
}
