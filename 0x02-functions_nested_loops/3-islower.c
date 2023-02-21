#include "main.h"

/**
 * _islower - code for ALX School students.
 *
 * @c:  is a parameter
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
