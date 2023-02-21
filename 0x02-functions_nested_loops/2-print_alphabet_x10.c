#include "main.h"

/**
 * print_alphabet_x10 - code for ALX School students.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char alp = 'a';

		while (alp <= 'z')
		{

		_putchar (alp);
		alp++;

		}
		_putchar ('\n');
	}
}
