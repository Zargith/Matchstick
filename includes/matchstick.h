/*
** EPITECH PROJECT, 2018
** matchstick.h
** File description:
** .h for project matchstick.
*/

#ifndef MATCHSTICK_H
#define MATCHSTICK_H

#include <stdlib.h>
#include <time.h>

typedef struct s_map
{
	int max_taken;
	int nb_line;
	int size_line;
	char **map;
}s_map;

void my_display_double_array(char **array);
int is_game_loop(s_map *infos_map);
int count_how_many_ms_board(s_map *infos_map);
int count_ms_line(int line, s_map *infos_map);
int check_remove(s_map *infos_map, int nb_ms, int nb_ms_this_line);
int is_player_turn(s_map *infos_map);
int is_ai_turn(s_map *infos_map);
void apply_modifs(s_map *infos_map, int line, int nb_ms);
void free_map(s_map *infos_map);

#endif
