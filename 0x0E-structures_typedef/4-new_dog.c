#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: struct dog ; case of fails, returns NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int newName, newOwner;

	if (name == 0 || owner == 0)
		return (0);

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == 0)
		return (0);

	newName = strlen(name);
	newOwner = strlen(owner);

	p_dog->name = malloc(newName + 1);
	p_dog->owner = malloc(newOwner + 1);

	if (p_dog->name == 0 || p_dog->owner == 0)
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (0);
	}

	strcpy(p_dog->name, name);
	p_dog->age = age;
	strcpy(p_dog->owner, owner);

	return (p_dog);
}

