#include "holberton.h"

/**
 * print_to_98 - Prints numbers up until 98
 * @n: Number
 * Return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
			printf("%d, ", n);
	}
	else
		for (n = n; n >= 98; n--)
			printf("%d, ", n);
	printf("98\n");
}

