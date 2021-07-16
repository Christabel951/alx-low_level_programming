#include <stdlib.h>
#include "holberton.h"
/**
 * _realloc - reallocate memory using malloc and free
 * @ptr: pointer to mem prev alloc with call to
 * malloc : malloc(old_size).
 * @old_size: size in bytes for the allocated space for ptr.
 * @new_size: size of new mem block in bytes.
 * Return: nothing -void.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned char *ptr1;
unsigned int i;

if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
ptr = malloc(sizeof(void *) * new_size);
if (ptr == NULL)
return (NULL);
return (ptr);
}
ptr1 = malloc(sizeof(char) * new_size);
if (ptr1 == NULL)
return (NULL);
if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
ptr1[i] = ((char *)ptr)[i];
free(ptr);
return (ptr1);
}
else
{
for (i = 0; i < new_size; i++)
ptr1[i] = ((char *)ptr)[i];
free(ptr);
return(ptr1);
}
}
