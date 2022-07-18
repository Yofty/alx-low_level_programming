#include "main.h"
/**
 * _strchr -  locates a character in a string
 * @s : s is the string pointer
 * @c :  c is the character to be located
 *
 * Return: chax (c) or (0)
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
