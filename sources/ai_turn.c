/*
** EPITECH PROJECT, 2018
** ai_turn.c
** File description:
** Manage AI's turn for project matchstick.
*/

#include "my.h"
#include "matchstick.h"

int choose_ai_line(s_map *infos_map)
{
	int line = 0;
	time_t t;
	int nb_ms_this_line = 0;

	srandom(time(&t));
	while (nb_ms_this_line == 0) {
		line = random() % (infos_map->nb_line - 1);
		nb_ms_this_line = count_ms_line(line, infos_map);
	}
	return (line);
}

int choose_ai_nb_ms(s_map *infos_map, int line)
{
	int nb_ms = 0;
	time_t t;
	int nb_ms_this_line = 0;
	int do_another_turn = 0;

	srandom(time(&t));
	while (do_another_turn == 0) {
		nb_ms = random() % (infos_map->max_taken);
		if (nb_ms > 0 && nb_ms <= infos_map->max_taken && nb_ms <= \
nb_ms_this_line)
			do_another_turn = 1;
		nb_ms_this_line = count_ms_line(line, infos_map);
	}
	return (nb_ms);
}

int is_ai_turn(s_map *infos_map)
{
	int line = 0;
	int nb_ms = 0;

	my_putstr("AI's turn...\n");
	line = choose_ai_line(infos_map);
	nb_ms = choose_ai_nb_ms(infos_map, line);
	apply_modifs(infos_map, line, nb_ms);
	my_printf("AI removed %i match(es) from line %i\n", nb_ms, line);
	my_display_double_array(infos_map->map);
	if (count_how_many_ms_board(infos_map) == 0)
		return (1);
	return (0);
}
