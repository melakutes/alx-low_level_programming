#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers separated by a newline
 * @separator: Separator between strings
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);
		printf("%d", va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
