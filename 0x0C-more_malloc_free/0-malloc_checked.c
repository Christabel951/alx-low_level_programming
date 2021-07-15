#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - allocate memory using malloc.
 * @b: type ul var to be allocated memory.
 * Return: pointer to allocated memory or 98 if malloc fails.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
