#include "main.h"
/**
 * _strncpy - copies a string
 * @dest : dest is destination pointer
 * @src : src is source pointer
 * @n : n is an int to be updated
 *
 * Return: char (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
