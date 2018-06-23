/*
** EPITECH PROJECT, 2017
** my_compute_power_rec.c
** File description:
** Calcul the p power of a number nb.  
*/

#include <my.h>

int my_compute_power_rec(int nb, int p)
{
	if (p != 0){
		return (nb * my_compute_power_rec(nb, (p - 1)));
	}
	else {
		return (1);
	}
	if (nb > 2147483647)
		return (0);
}
