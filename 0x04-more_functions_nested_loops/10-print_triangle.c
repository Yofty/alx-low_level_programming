#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size : size is the size of the triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = 0 ; x < size ; x++)
		{
			for (z = size - 1 - x ; z > 0 ; z--)
			{
				_putchar(' ');
			}
			for (y = 0 ; y <= x ; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
