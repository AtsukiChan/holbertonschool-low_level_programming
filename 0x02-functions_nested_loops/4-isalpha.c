#include "holberton.h"
/**
 * _isalpha - checks for uppercase
 * @c: letter checked
 * Return: Always 0.
 */

	int _isalpha(int c)
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
