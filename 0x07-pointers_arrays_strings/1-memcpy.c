#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest : dest is a pointer to char to be updated
 * @src : src is a pointer to char to be updated
 * @n : n is the bytes of the memory
 *
 * Return: char(dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
