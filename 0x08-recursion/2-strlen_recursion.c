#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s : s is the string which the length to be printed
 *
 * Return: int(length os the string)
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
