#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest : dest is destination pointer
 * @src : src is source pointer
 * @n : n is int to be updated
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
