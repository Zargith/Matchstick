/*
** EPITECH PROJECT, 2018
** player_turn.c
** File description:
** Manage player's turn for project matchstick.
*/

#include "my.h"
#include "matchstick.h"

int ask_player_line(s_map *infos_map)
{
	char *str = NULL;
	int line = 0;

	my_putstr("Line: ");
	str = get_next_line(0);
	if (str == NULL) {
		my_putchar('\n');
		return (-1);
	}
	if (my_str_isnum(str) == 84) {
		my_putstr("Error: invalid input (positive number expected)\n");
		free(str);
		return (-2);
	}
	line = my_getnbr(str);
	if (line <= 0 || line > infos_map->nb_line - 2) {
		my_putstr("Error: invalid input (positive number expected)\n");
		free(str);
		return (-2);
	}
	return (line);
}

int ask_player_nb_ms(s_map *infos_map, int line)
{
	char *str = NULL;
	int nb_ms = 0;
	int nb_ms_this_line = 0;

	my_putstr("Matches: ");
	str = get_next_line(0);
	if (str == NULL) {
		my_putchar('\n');
		return (-1);
	}
	if (my_str_isnum(str) == 84) {
		my_putstr("Error: invalid input (positive number expected)\n");
		return (-2);
	}
	nb_ms = my_getnbr(str);
	nb_ms_this_line = count_ms_line(line, infos_map);
	if (check_remove(infos_map, nb_ms, nb_ms_this_line) == -2)
		return (-2);
	free(str);
	return (nb_ms);
}

int is_player_turn(s_map *infos_map)
{
	int line = 0;
	int  nb_ms = 0;

	my_putstr("Your turn:\n");
	line = ask_player_line(infos_map);
	if (line == -1)
		return (-1);
	else if (line == -2)
		return (-2);
	nb_ms = ask_player_nb_ms(infos_map, line);
	if (nb_ms == -1)
		return (-1);
	else if (nb_ms == -2)
		return (-2);
	apply_modifs(infos_map, line, nb_ms);
	my_printf("Player removed %i match(es) from line %i\n", nb_ms, line);
	my_display_double_array(infos_map->map);
	return (0);
}
