#include "main.h"

/**
 *  binary_to_unit - Function that converts a binary number to an unsigned int.
 *  Prototype: unsigned int binary_to_uint(const char *b);
 *  @b: is pointing to a string of 0 and 1 chars
 *  Return: The converted number,
 *  Or 0 if -> there is one or more chars in the string b that is not 0 or 1
 *  -> b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		val = val << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			val = val | 1;
		b++;
	}
	return (val);
}
