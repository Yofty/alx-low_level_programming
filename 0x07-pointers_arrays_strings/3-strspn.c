#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s : s is the string
 * @accept : accept is substring
 *
 * Return: unsigned int (x)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	char *a = accept;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				x++;
				break;
			}
		}
		if (!(*--accept))
			break;

		zccept = a;
	}
	return (x);
}
