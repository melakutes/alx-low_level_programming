#include "main.h"

/**
 * _memset - fills the first n bytes of memory
 * byt the constant byte
 * @s: starting address
 * @b: the constant byte to replace
 * @n: n bytes of memory
 * Return: a pinter to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *start = s;

	for (i = 0; i < n; i++)
		*s++ = b;
	return (start);
}
