#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: triangle size
 */

void print_triangle(int size)
{
	int s, h;

	if (size <= 0)
		_putchar('\n');

	for (s = 1; s <= size; s++)
	{
		for (h = 1; h <= size; h++)
		{
			if (h <= (size - s))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
