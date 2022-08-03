#include <stdlib.h>
/**
 * print_name -  prints a name
 * @name  : is the name to be printed
 * @f : f is function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
