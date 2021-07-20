#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - create new dog
 * @name: pointer to type char
 * @age: float type
 * @owner: pointer to type char
 * Return: pointer to type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndg;

	ndg = malloc(sizeof(dog_t));
	if (ndg == NULL)
		return (NULL);
	else
	{
		ndg->name= name;
		ndg->age = age;
		ndg->owner = owner;
		return (ndg);
	}
}
