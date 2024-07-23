#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - program that creates new dog structure
 * @name: Name of dog
 * @age: Age of the dog
 * @owner: The owner of the dog
 * Return: returns a pointer to the newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpname, *cpowner;
	int len0 = 0, len1 = 0, k;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len0])
		len0++;
	while (owner[len1])
		len1++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	cpname = malloc(len0 + 1);
	if (cpname == NULL)
		return (NULL);
	for (k = 0; name[k]; k++)
		cpname[k] = name[k];
	cpname[k] = '\0';

	cpowner = malloc(len1 + 1);
	if (cpowner == NULL)
		return (NULL);
	for (k = 0; owner[k]; k++)
		cpowner[k] = owner[k];
	cpowner[k] = '\0';

	new_dog->name = cpname;
	new_dog->age = age;
	new_dog->owner = cpowner;
	return (new_dog);
}
