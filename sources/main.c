/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** Main for project matchstick.
*/

#include "my.h"
#include "matchstick.h"

void fill_char_star_star_part_two(s_map *infos_map)
{
	int i = 0;

	for (i = 0; i < infos_map->size_line - 2; i++)
		infos_map->map[0][i] = '*';
	infos_map->map[0][i] = '\0';
	for (i = 0; i < infos_map->size_line - 2; i++)
		infos_map->map[infos_map->nb_line - 1][i] = '*';
	infos_map->map[infos_map->nb_line - 1][i] = '\0';
}

void fill_char_star_star_part_one(s_map *infos_map)
{
	int i = 0;
	int nbr_spaces = 0;
	int ms_this_line = 1;

	for (int y = 1; y < infos_map->nb_line - 1; y++) {
		nbr_spaces = ((infos_map->size_line - ms_this_line) / 2) - 1;
		infos_map->map[y][0] = '*';
		for (i = 1; i < nbr_spaces; i++)
			infos_map->map[y][i] = ' ';
		for (int j = 0; j < ms_this_line; j++) {
			infos_map->map[y][i] = '|';
			i++;
		}
		for (i = i; i < infos_map->size_line - 2; i++)
			infos_map->map[y][i] = ' ';
		infos_map->map[y][i - 1] = '*';
		infos_map->map[y][i] = '\0';
		ms_this_line += 2;
	}
	fill_char_star_star_part_two(infos_map);
}

int alw_d_arr(s_map *infos)
{

	infos->map = malloc(sizeof(char*) * (infos->nb_line + 1));
	if (infos->map == NULL)
		return (84);
	for (int y = 0; y < infos->nb_line; y++) {
		infos->map[y] = malloc(sizeof(char) * (infos->size_line + 1));
		if (infos->map[y] == NULL)
			return (84);
	}
	infos->map[infos->nb_line] = NULL;
	return (0);
}

int chk_trnsf_prm(char **av, s_map *infos_map)
{
	int i = 0;

	for (i = 0; av[1][i] != '\0'; i++)
		if (av[1][i] < '0' || av[1][i] > '9')
			return (84);
	for (i = 0; av[2][i] != '\0'; i++)
		if (av[2][i] < '0' || av[2][i] > '9')
			return (84);
	infos_map->max_taken = my_getnbr(av[2]);
	if (infos_map->max_taken <= 0 || infos_map->max_taken < 1)
		return (84);
	infos_map->nb_line = my_getnbr(av[1]) + 2;
	if (infos_map->nb_line < 1 || infos_map->nb_line > 100)
		return (84);
	infos_map->size_line = 3;
	for (int count = 0; count < infos_map->nb_line - 2; count++)
		infos_map->size_line += 2;
	return (0);
}

int main(int ac, char **av)
{
	s_map *info;

	if (ac != 3)
		return (84);
	info = malloc(sizeof(*info));
	if (info == 0 || chk_trnsf_prm(av, info) == 84 || alw_d_arr(info) == 84)
		return (84);
	fill_char_star_star_part_one(info);
	switch (is_game_loop(info)) {
	case (0):
		return (0);
	case (1):
		my_putstr("I lost... snif... but I'll get you next time!!\n");
		return (1);
	case (2):
		my_putstr("You lost, too bad...\n");
		return (2);
	}
	free_map(info);
	return (0);
}
