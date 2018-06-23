/*
** EPITECH PROJECT, 2017
** my_strcapitalize.c
** File description:
** Function that capitalizes the first letter of each word.
*/

#include <my.h>

int spc(char *str, int i)
{
	if (str[i] >= ' ' && str[i] <= '/' && \
str[i + 1] >= 'a' && str[i + 1] <= 'z')
		str[i + 1] = str[i + 1] - 32;
	if (str[i] >= ':' && str[i] <= '@' && \
str[i + 1] >= 'a' && str[i + 1] <= 'z')
		str[i + 1] = str[i + 1] - 32;
}

int spc2(char *str, int i)
{
	if (str[i] >= '[' && str[i] <= 96 && \
str[i + 1] >= 'a' && str[i + 1] <= 'z')
		str[i + 1] = str[i + 1] - 32;
	if (str[i] >= '{' && str[i] <= 127 && \
str[i + 1] >= 'a' && str[i + 1] <= 'z')
		str[i + 1] = str[i + 1] - 32;
}

int lowcase(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z' && \
str[i - 1] >= 'A' && str[i - 1] <= 'Z')
		str[i] = str[i] + 32;
	if (str[i] >= 'A' && str[i] <= 'Z' && \
str[i - 1] >= 'a' && str[i - 1] <= 'z')
		str[i] = str[i] + 32;
	if (str[i] >= 'A' && str[i] <= 'Z' && \
str[i - 1] >= '0' && str[i - 1] <= '9')
		str[i] = str[i] + 32;
}

int upcase(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z' && \
str[i + 1] >= 'a' && str[i + 1] <= 'z')
		str[i] = str[i] - 32;
}

char *my_strcapitalize(char *str)
{
	int i;

	while (str[i] != '\0') {
		spc(str, i);
		spc2(str, i);
		upcase(str, i);
		lowcase(str, i);
		my_putchar(str[i]);
		i ++;
	}
}
