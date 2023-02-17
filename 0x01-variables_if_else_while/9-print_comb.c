#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point.
* Return: 0 (success).
*/

int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}

	putchar('\n');

	return (0);
}
