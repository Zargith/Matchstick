/*
** EPITECH PROJECT, 2018
** free_map.c
** File description:
** Free map for project matchstick.
*/

#include "my.h"
#include "matchstick.h"

void free_map(s_map *infos_map)
{
	for (int y = 0; y < infos_map->nb_line + 2; y++)
		free(infos_map->map[y]);
	free(infos_map->map);
	free(infos_map);
}
