#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure dog declaration
 * @name: First member
 * @owner: Second member
 * @age: Third member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
