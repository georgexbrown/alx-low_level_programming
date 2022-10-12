#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that craetes a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: NULL if function fails, or pointer to structure if success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	unsigned int i, j, k;

	if (name == NULL || owner == NULL)
		return (NULL);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	for (k = 0; name[k]; k++)
		;
	k++;

	doggy->name = malloc(k * sizeof(char));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < k; i++)
		doggy->name[i] = name[i];

	doggy->age = age;
	for (j = 0; owner[j]; j++)
		;
	j++;
	doggy->owner = malloc(j * sizeof(char));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < j; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
