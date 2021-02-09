#include "holberton.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 * Return: 0
*/

void print_alphabet_x10(void)
{

	char lowercaseLetter;
	int numOfRows;

	for (numOfRows = 0; numOfRows <= 9; numOfRows++)
	{
		for (lowercaseLetter = 97; lowercaseLetter <= 122; lowercaseLetter++)
		{
			_putchar(lowercaseLetter);
		}
		_putchar('\n');
	}
}

