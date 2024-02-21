#include "main.h"
#include <stdio.h>
/**
 * _strlen - Calculates the lenght of a string.
 * @s: Pointer to the string.
 * Return: Number of characters in the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
