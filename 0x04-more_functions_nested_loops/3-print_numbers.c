#include "holberton.h"

/**
 * print_numbers - Prints 0-9
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}

	_putchar('\n');
}
