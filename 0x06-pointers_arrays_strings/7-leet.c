#include "main.h"
/**
 * leet - encodes a string into 1337
 * @x : x is pointer to char to be updated
 *
 * Return: char (x)
 */
char *leet(char *x)
{
	int a = 0, b;
	int c[] = {97, 101, 111, 116, 108};
	int d[] = {65, 69, 79, 84, 76};
	int e[] = {52, 51, 48, 55, 49};

	while (*(x + a) != '\0')
	{
		for (b = 0 ; b < 5 ; b++)
		{
			if (*(x + a) == c[b] || *(x + a) == d[b])
			{
				*(x + a) = e[b];
				break;
			}
		}
		a++;
	}
	return (x);
}
