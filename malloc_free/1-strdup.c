#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Duplicates a string using malloc.
 * @str: The string to duplicate.
 * Return: A pointer to the duplicated string, or NULL if it fails.
 */
char *_strdup(char *str)
{
	char *d;
	unsigned int length, i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (length = 0; str[length] != '\0'; length++)
		;

	d = (char *)malloc((length + 1) * sizeof(char));

	if (d == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		d[i] = str[i];
	}

	return (d);
}
