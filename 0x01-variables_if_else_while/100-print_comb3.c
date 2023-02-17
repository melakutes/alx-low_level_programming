#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int i = 48, j = 48;

	while (i < 58)
	{
		while (j < 58)
		{
			putchar(i);
			putchar(j);

			if (i != 57 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		j = 48;
		i++;
	}
	putchar('\n');
	return (0);
}
