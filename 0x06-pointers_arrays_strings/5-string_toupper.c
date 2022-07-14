#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @a : * is the input char
 * Return: char (a)
 */
char *string_toupper(char *a)
{
	int x = 0;

	while (a[x] != '\0')
	{
		if (a[x] >= 'a' && a[x] <= 'z')
		{
			a[x] = a[x] -32;
		}
		x++;
	}
	return (a);
}
