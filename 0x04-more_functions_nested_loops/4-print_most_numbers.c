#include "main.h"

/**
 * print_most_numbers - check the code for ALX School students.
 *
 *
 * Return: No.
 */


void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
