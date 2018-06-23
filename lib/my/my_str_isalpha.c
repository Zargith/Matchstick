/*
** EPITECH PROJECT, 2017
** my_str_isalpha.c
** File description:
** Check if there is only alpha char on the str.
*/

#include <my.h>

int alpha(char const *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
		return (0);
	else
		return (1);
}

int my_str_isalpha(char const *str)
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
