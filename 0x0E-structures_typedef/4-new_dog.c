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
	char *n = name;
	char *o = owner;

	ndg = malloc(sizeof(dog_t));
	if (ndg == NULL)
		return (NULL);
	ndg->name= n;
	ndg->age = age;
	ndg->owner = o;
	return (ndg);
}
