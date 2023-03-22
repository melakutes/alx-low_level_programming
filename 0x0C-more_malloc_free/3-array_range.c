#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer to the newly created array
 * NULL if malloc failure
 */
int *array_range(int min, int max)
{
	int *array;
	int i, j = 0;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(*array) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		array[j] = i;
		j++;
	}
	return (array);
}
