#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: A pointer to the newly created dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *newdog = (dog_t *)malloc(sizeof(dog_t));

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
