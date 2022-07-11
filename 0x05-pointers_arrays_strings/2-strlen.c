#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s : s is an int pointer that will be updated
 *
 * Return: int (x)
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
