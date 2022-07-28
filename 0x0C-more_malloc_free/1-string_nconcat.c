#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1 : s1 is the 1st string
 * @s2 :s2 is the 2nd string
 * @n : n is the size of the string
 * Return: char(a)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int x = 0, y = 0, z;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
	{
		x++;
	}

	while (s2[y] != '\0')
	{
		y++;
	}

	if (n > y)
		n = y;
	a = malloc((x + n + 1) * sizeof(char));

	if (a == NULL)
		return (0);

	for (z = 0 ; z < x ; z++)
	{
		a[z] = s1[z];
	}

	while (z < (x + n))
	{
		a[z] = s2[z - x];
		z++;
	}

	a[z] = '\0';
	return (a);
}
