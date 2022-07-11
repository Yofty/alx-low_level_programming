#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str : str is the pointer ro be updated
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int x = 0;

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		if (x % 2 == 0)
			_putchar(str[x]);
	}
	putchar('\n');
}
