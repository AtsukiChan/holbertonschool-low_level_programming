#include "holberton.h"

/**
 * more_numbers - Prints numbers 0-14
 */

void more_numbers(void)
{
	int numbers;
	int numOfRows;

	for (numOfRows = 0; numOfRows <= 10; numOfRows++)
	{
		for (numbers = '0'; numbers <= 14; numbers++)
		{
			if (numbers > 9)
			{
				_putchar((numbers / 10) + '0');
			}
			_putchar((numbers % 10) + '0');
		}
		_putchar('\n');
	}
}
