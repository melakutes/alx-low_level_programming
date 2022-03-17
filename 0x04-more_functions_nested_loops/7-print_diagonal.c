#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: int parameter size
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int m = n;

	if (n <= 0)
		_putchar('\n');

	for (; n > 0; n--)
	{
		for (i = 0; i < m - n; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
