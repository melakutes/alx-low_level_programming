#include "main.h"

/**
 * print_binary - Function that prints the binary representation of a number.
 * Prototype: void print_binary(unsigned long int n);
 * @n: number to convert to binary
 * You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
