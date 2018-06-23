/*
** EPITECH PROJECT, 2017
** my_str_isupper.c
** File description:
** CHeck if there is only uppercase on the srt.
*/

#include <my.h>

int alpha(char const *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
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
