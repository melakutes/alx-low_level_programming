#include <stdlib.h>
/**
 * _memset - fills the first n bytes of memory by the constant byte
 * @s: starting address
 * @b: constant byte to replace
 * @n: n bytes of memory
 *
 * Return: a pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *start = s;

	for (i = 0; i < n; i++)
		*s++ = b;
	return (start);
}
/**
 * _calloc - allocates memory for an array of nmemb elements
 * of size bytes each
 * @nmemb: number of elements of array
 * @size: size of the elements
 *
 * Return: pointer to the allocated memory, each elt set to 0
 * NULL if fails or if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	_memset(array, 0, nmemb * size);
	return (array);
}
