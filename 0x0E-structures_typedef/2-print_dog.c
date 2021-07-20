#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print - a struct dog.
 * @d: pointer to type struct dog.
 * Return: nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nill)\n");
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nill)\n");
		printf("Owner: %s\n", d->owner);
	}
}
