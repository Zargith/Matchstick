/*
** EPITECH PROJECT, 2017
** my_swap.c
** File description:
** Swap that contain a on b and what contain b on a.
*/

void my_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
