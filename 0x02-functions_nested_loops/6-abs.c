#include "holberton.h"

/**
 * _abs - Absolute value
 * @r: number checked
 * Return: Always 0.
 */

int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else if (r < 0)
	{
		return (r * -1);
	}
	else
	{
		return (0);
	}
}

