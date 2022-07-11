#include "main.h"
/**
 * rev_string - reverses a string
 * @s : s is the pointer to be updated
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int x, y;
	int z = 0;
	char *a, *b, c;

	for (x = 0 ; s[x] ; x++)
	{
		z++;
	}
	y = z;
	a = s;
	b = s;

	for (x = 0 ; x < y - 1 ; x++)
	{
		b++;
	}

	for(x = 0 ; x < y / 2 ; x++)
	{
		c = *b;
		*b = *a;
		*a = c;
		a++;
		b--;
	}
}
