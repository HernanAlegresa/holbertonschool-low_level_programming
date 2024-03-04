#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - the function name
 * @s1: the first parameter type char
 * @s2: the second parameter type char
 * @n: the third parameter type itn unsigned
 * Return: A functio that concatenates two strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int length = n;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		length++;

	concat = malloc(sizeof(char) * (length + 1));
	if (concat == NULL)
		return (NULL);

	j = 0;
	for (i = 0; s1[i]; i++)
		concat[j++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concat[j++] = s2[i];

	concat[j] = '\0';

	return (concat);
}
