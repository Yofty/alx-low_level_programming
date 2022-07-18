#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s : s is the string to be matched
 * @accept : accept is the string ot be matched
 *
 * Return: char (null)
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s != '\0')
	{
		for (x = 0 ; accept[x] != '\0' ; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return (0);
}
