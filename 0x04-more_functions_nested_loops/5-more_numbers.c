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
#include "main.h"

/**
 * more_numbers - more ns..
 * Return: 0
 */

void more_numbers(void)
{
char i, j, k;
int l;

for (l = 0; l <= 9; l++)
{
k = '9';
for (i = '0'; i <= '1'; i++)
{
for (j = '0'; j <= k; j++)
{
if (i > '0')
_putchar(i);
_putchar(j);
}
k = '4';
}
_putchar('\n');
}
}
