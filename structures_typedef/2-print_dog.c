#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - the name of the function
 * struct dog - the characteristics of the dog
 * @d: the parameter
 * Return: A function that prints a struct dog
 */
void print_dog(struct dog *d)
{

if (d)
	{
	d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
		printf("Age: %f\n", d->age);
	d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
	}

}
