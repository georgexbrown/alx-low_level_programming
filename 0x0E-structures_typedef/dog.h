#ifndef _STRUCT_DOG_
#define _STRUCT_DOG_

/**
 * struct dog - name of structure
 * @name: first variable
 * @age: second variable
 * @owner: third variable
 */

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
