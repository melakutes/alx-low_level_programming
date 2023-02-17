#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48, j = 49, y = 50;
		while (i < 58)
		{
			while (j < 58)
			{
				while (y < 58)
				{
					putchar(i);
					putchar(j);
					putchar(y);

					if (i != 55 || j != 56 || y != 57)
					{
						putchar(',');
						putchar(' ');
					}
					y++;
				}
				j++;
				y = j + 1;
			}
			i++;
			j = i;
		}
		putchar('\n');
		return (0);
}
