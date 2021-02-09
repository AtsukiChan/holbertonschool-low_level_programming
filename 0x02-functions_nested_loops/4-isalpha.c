#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * 
 * Return: Always 0.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	int r;	r = isalpha('H');
	_putchar(r + '0');
	r = isalpha('o');
	_putchar(r + '0');
	r = isalpha(108);
	_putchar(r + '0');
	r = isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

	int isalpha(int c)
{	
	if (c >= 65 && c <= 122)
		{
			return (1);
		}
			else
		{
			return (0);
		}
}
