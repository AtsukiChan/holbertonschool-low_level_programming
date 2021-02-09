#include "holberton"

/**
 * _islower - checks for lowercase
 * @c: letter checked
 * Return: 0
*/

int islower(int c)
{
    
    if (c > 96 && c < 122)
        {
            return (1);
        }
    
    else 
        return (0);
}
