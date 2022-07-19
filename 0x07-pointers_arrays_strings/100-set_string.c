#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @*s - *s is the pointer to char to be copied
 * @to - to is the char to be updated
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
