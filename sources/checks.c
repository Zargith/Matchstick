/*
** EPITECH PROJECT, 2018
** checks.c
** File description:
** Checks for project matchstick.
*/

#include "my.h"
#include "matchstick.h"

int count_how_many_ms_board(s_map *infos_map)
{
	int count = 0;

	for (int y = 0; infos_map->map[y] != NULL; y++)
		for (int x = 0; infos_map->map[y][x] != '\0'; x++)
			if (infos_map->map[y][x] == '|')
				count++;
	return (count);
}

int count_ms_line(int line, s_map *infos_map)
{
	int count = 0;

	for (int i = 0; infos_map->map[line][i] != '\0'; i++)
		if (infos_map->map[line][i] == '|')
			count++;
	return (count);
}

int check_remove(s_map *infos_map, int nb_ms, int nb_ms_this_line)
{
	if (nb_ms <= 0) {
		my_putstr("Error: you have to remove at least one match\n");
		return (-2);
	}
	if (nb_ms > infos_map->max_taken) {
		my_putstr("Error: you cannot remove more than ");
		my_printf("%i matches per turn\n", infos_map->max_taken);
		return (-2);
	}
	if (nb_ms > nb_ms_this_line) {
		my_putstr("Error: not enough matches on this line\n");
		return (-2);
	}
	return (0);
}

void apply_modifs(s_map *infos_map, int line, int nb_ms)
{
	int i = infos_map->size_line;
	int removed_pos = 0;

	for (i = i; infos_map->map[line][i] != '|'; i--);
	removed_pos = i - nb_ms;
	for (i = i; i > removed_pos; i--)
		infos_map->map[line][i] = ' ';
}
