/*
** EPITECH PROJECT, 2017
** my_str_isnum.c
** File description:
** Check if there is only digits on the str. 
*/

#include <my.h>

int alpha(char const *str, int i)
{
	if (str[i] >= '0' && str[i] <= '9')
		return (0);
	else
		return (1);
}

int my_str_isnum(char const *str)
{
	int f = 0;
	int a = 0;

	if (str == NULL || str[0] == '\0')
		return (84);
	while (str[f] != '\0' && a == 0) {
		a = alpha(str, f);
		f = f + 1;
	}
	if (a != 0 || str[f] != '\0')
		return (84);
	else
		return (0);
}
