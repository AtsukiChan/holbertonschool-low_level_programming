#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * main - Prints alphabet 10 times
 * Return: 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet_x10(void);

int main(void) {

	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void) {

	char lowercaseLetter;

	for (int numOfRows = 0; numOfRows <= 9; numOfRows++) {

		for (lowercaseLetter = 97; lowercaseLetter <= 122; lowercaseLetter++) {

			_putchar(lowercaseLetter);

		}
	_putchar('\n');

	}
}

