#include "main.h"
/**
 * _memset -  fills memory with a constant byte
 * @s : s is a char pointer to to be updated
 * @b : b is a char pointer to be updated
 * @n : n is bytes of memory
 *
 * Return: char(s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
	{
		s[x] = b;
	}
	return (s);
}
