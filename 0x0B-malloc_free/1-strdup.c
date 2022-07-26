#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - eturns a pointer to a newly allocated space in memory
 * @str : the string to be duplicated
 * Return: char (y)
 */
char *_strdup(char *str)
{
	int x, s;
	char *y;

	if (str == NULL)
		return (NULL);

	s = 0;
	while (str[s] != '\0')
	{
		s++;
	}
	y = malloc(s * sizeof(*str) + 1);
	if (y == 0)
	{
		return (NULL);
	}
	else
	{
		x =0;
		while (x < s)
		{
			y[x] = str[x];
			x++;
		}
	}
	return (y);
}
