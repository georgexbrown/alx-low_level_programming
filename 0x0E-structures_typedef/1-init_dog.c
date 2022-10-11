#include "dog.h"

/**
 * init_dog - function that initializes a struct type variable
 * @d: structure definition
 * @name: value to be passed into structure name
 * @age: value to be passed into structure age
 * @owner: value that holds value passed to struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog d;

	d.name = name;
	d.age = age;
	d.owner = owner;
}
