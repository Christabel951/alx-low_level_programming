#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - allocates memory for an array and initiatize it to 0.
 * @nmemb: num of elements.
 * @size: mem size in bytes.
 * Return: pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
	return ((void *)ptr);
}
