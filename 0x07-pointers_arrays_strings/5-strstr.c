#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack : haystack is the string to be searched
 * @needle : needleis the substring to be looked for
 *
 * Return: char (needle) or null
 */
char *_strstr(char *haystack, char *needle)
{
	char *a = haystack;
	char *b = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (a);
		}
		needle = b;
		a++;
		haystack = a;
	}
	return ('\0');
}
