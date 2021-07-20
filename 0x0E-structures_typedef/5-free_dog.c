#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - free dogs
 * @d: pointer to type dog_t
 * Return: nothing
 */
void free_dog(dog_t *d)
{
		free(d);
}
