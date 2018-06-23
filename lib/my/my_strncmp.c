/*
** EPITECH PROJECT, 2017
** my_strncmp.c
** File description:
** Reproduce the behavior of the strncmp function.
*/

int my_strcmp(char const *s1, char const *s2, int n)
{
	int i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0') &&
		(s2[i] != '\0') && i <= n) {
		i++;
	}
	return (s1[i] - s2[i]);
}
