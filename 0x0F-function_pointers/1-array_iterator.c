#include <stdlib.h>
/**
 * array_iterator - executes a function on each element of an array
 * @array: the array
 * @size: size of the array
 * @action: pointer to the function we use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || size <= 0 || action == NULL)
		exit(1);
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
