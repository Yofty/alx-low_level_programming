#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @src : src is a char pointer that will be updated
 * @dest : dest is the char pointer that will be updated
 *
 * Return: char (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0 ; src[x] != '\0' ; x ++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
