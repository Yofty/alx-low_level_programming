#include <stdio.h>
/**
 * bmain - prints a string before the main function is executed
 * Return: nothing
 */
void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
