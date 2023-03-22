#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size to allocate
 *
 * Return: a pointer to the allocated memory
 * if failure, terminates program with status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr)
		return (ptr);
	exit(98);
}
