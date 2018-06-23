/*
** EPITECH PROJECT, 2017
** my_compute_square_root.c
** File description:
** Function that return the square root of a number given as agument.
*/

#include <my.h>

int my_compute_square_root(int nb)
{
	int r;

	if (nb <= 0)
		return (0);
	while ((r * r) < nb){
		r += 1;
	}
	return (r);
}
