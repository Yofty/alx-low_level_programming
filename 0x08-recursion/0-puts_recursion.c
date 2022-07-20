#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s : s is the string to be printed
 *
 * Return: nothing
 */
void  _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
