#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - the function name
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * @d: the letter of dog
 * Description: Defines metadata about the dog and type of dog's struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d == NULL)
	;

else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
