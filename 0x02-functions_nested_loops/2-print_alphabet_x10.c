#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lower case 10x
 *
 * return: nothing
 */
void print_alphabet_x10(void)
{
	char c;
	int n;
	
	for (n = 0 ; n < 10 ; n++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
