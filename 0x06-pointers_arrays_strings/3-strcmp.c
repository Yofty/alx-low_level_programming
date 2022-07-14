#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1 : s1 is char pointer to be updated
 * @s2 : s2 is char pointer to be updated
 *
 * Return: char (des)
 */
int _strcmp(char *s1, char *s2)
{
	char *a = s1;
	char *b = s2;

	while (*a != '\0' &&  *b != '\0' && *a == *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}
