/*
** EPITECH PROJECT, 2017
** my_putchar.c
** File description:
** Write a character.
*/

#include "my.h"
#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}
