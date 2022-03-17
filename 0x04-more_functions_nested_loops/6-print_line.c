#include "main.h"

/**
 * print_line - prints n
 * @n: size
 * Return: none.
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
