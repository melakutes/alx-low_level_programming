#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * 0n error, -1 is returned, and error no is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
