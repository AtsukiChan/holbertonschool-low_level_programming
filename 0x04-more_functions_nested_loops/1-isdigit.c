#include "holberton.h"

/**
 * _isdigit - Checks for numbers
 * @c: Number to be checked
 * Return: 0
 */

int _isdigit(int c);
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
		return (0);
}
