/*
** EPITECH PROJECT, 2017
** my_strncat.c
** File description:
** Function that n characters of the src string to the end of the dest string.
*/

char *my_strcat(char *dest, char const *src, int nb)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i += 1;
	while (src[j] != nb || src[j] == '\0') {
		dest[i] = src[j];
		i += 1;
		j += 1;
	}
	return (dest);
}
