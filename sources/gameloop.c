/*
** EPITECH PROJECT, 2018
** gameloop.c
** File description:
** Gameloop for project matchstick.
*/

#include "my.h"
#include "matchstick.h"

int is_game_loop(s_map *infos_map)
{
	int p1 = 0;
	int p2 = 0;

	my_display_double_array(infos_map->map);
	for (int total_ms = count_how_many_ms_board(infos_map); total_ms > 0; \
total_ms = count_how_many_ms_board(infos_map)) {
		p1 = is_player_turn(infos_map);
		if (p1 == -1)
			return (0);
		else if (p1 == -2) {
			p1 = is_player_turn(infos_map);
			while (p1 == -2)
				p1 = is_player_turn(infos_map);
		}
		if (count_how_many_ms_board(infos_map) == 0)
			return (2);
		p2 = is_ai_turn(infos_map);
	}
	if (p2 == 1)
		return (1);
	return (0);
}
