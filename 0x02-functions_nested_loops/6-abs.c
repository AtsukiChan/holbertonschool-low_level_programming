#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _abs(int);

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}

int abs(int r) {

	int mod_r =(r * -1);

	if (r > 0)
	{
		return r;
	}

	else
		return 1;
}

