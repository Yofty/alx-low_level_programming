#include "main.h"
/**
 * _isalpha - hecks for alphabetic character
 * @c : c is the character user inters
 *
 * Return: 1 (for letter) or 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
