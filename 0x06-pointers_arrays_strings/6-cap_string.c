#include "main.h"
/**
 * cap_string -  capitalizes all words of a string
 * @x : x is the input string
 *
 * Return: char (x)
 */
char *cap_string(char *x)
{
	int a = 0, b;
	int s[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(x + a) >= 97 && *(x + a) <= 122)
		*(x + a) = *(a + x) - 32;
	a++;

	while (*(x + a) != '\0')
	{
		for (b = 0 ; b < 13 ; b++)
		{
			if (*( x + a) == s[b])
			{
				if ((*(x + (a + 1)) >= 97) && (*(x + (a + 1)) <= 122))
					*(x + (a + 1)) = *(x + (a + 1)) -32;
				break;
			}
		}
		a++;
	}
	return (x);
}
