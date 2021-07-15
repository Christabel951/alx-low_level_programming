#include <stdlib.h>
#include "holberton.h"
/**
 * array_range - create array of ints.
 * @min: type int range parameter.
 * @max: type int range parameter
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for(i = 0; i < size; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
