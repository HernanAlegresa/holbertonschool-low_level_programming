#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - the function name
 * @s1: the first parameter type char
 * @s2: the second parameter type char
 * @n: the third parameter type itn unsigned
 *
 *
 * Return: A functio that concatenates two strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	result = (char *)malloc(strlen(s1) + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strncat(result, s2, n);

	return (result);

}
