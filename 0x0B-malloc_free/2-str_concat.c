#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1 : s1 is the first string
 * @s2 : s2 is the second string
 * Return: char (str)
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int x, y, z, l;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	x = 0;
	while (s1[x] != '\0')
		x++;

	y = 0;
	while (s2[y] != '\0')
		y++;
	str = malloc(sizeof(char) * (x + y + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (z = 0 ; z < x ; z++)
	       str[z] = s1[z];

	l = y;
	for (y = 0 ; y <= l ; z++, y++)
	       str[z] = s2[y];
	return (str);
}
