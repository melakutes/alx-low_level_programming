#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Prints strings passed to it, and prints separator
 * passed between the strings
 * @separator: Separator between strings
 * @n: Number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		if (str == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", str);
	}
	va_end(args);
	printf("\n");
}
