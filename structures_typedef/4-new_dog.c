#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - name of the function
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: A function that creates new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *newdog;

	if (name == NULL || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}

	newdog->name = strdup(name);

	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = strdup(owner);

	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);

	}

	newdog->age = age;

	return (newdog);
}
