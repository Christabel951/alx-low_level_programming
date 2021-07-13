#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - create array of char and initialize with specific char.
 * @size: array length.
 * @c: character to be initialized in array.
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(sizeof(char) * size);
		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			arr[0] = c;
			return (arr);
		}
	}
}
