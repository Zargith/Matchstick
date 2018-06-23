/*
** EPITECH PROJECT, 2017
** my_strncpy.c
** File description:
** Function that copies n characters from a string to another.
*/

char *my_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (i = 0; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
