#include "main.h"

/**
 * print_square - prints squre
 * @size: square's size
 * Return: 0
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (j = size; j > 0; j--)
	{
		for (i = size; i > 0; i--)
			_putchar('#');
		_putchar('\n');
	}
}
