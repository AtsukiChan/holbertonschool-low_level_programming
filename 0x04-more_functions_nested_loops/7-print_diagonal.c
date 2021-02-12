#include "holberton.h"

/**
 * print_diagonal - prints lines diagonally
 * @n: line length
 */

void print_diagonal(int n)
{
	int l;
	int s;

	if (num > 0)
		for (l = 0; l < n; l++)
		{
			for (s = 0; s < l; s++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
