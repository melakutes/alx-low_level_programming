#include "main.h"

/**
 * jack_bauer - check the code for ALX School students.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int z;
	int hr2;

	for (i = 48; i < 51; i++)
	{
		if (i == 50)
		{
			hr2 = 51;
		}
		else if (i != 50)
		{
			hr2 = 57;
		}
		for (j = 48; j <= hr2; j++)
		{
			for (k = 48; k < 54; k++)
			{
				for (z = 48; z <= 57; z++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(z);
					_putchar('\n');
				}
			}
		}
	}

}
