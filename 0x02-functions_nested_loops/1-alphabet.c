#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
 * main - Prints alphabet
 * Return: 0   
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void);

int main (void) {

	print_alphabet();
	return 0;
}

void print_alphabet(void) {

	char lowercaseLetter;

	for (lowercaseLetter = 97; lowercaseLetter <= 122; lowercaseLetter++) {

		_putchar(lowercaseLetter);
	}

	_putchar('\n');
}
