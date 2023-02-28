#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: int whose value is to be swapped with b
 * @b: int whose value is to be swapped with a
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
int new;

new = *a;
*a = *b;
*b = new;
}
