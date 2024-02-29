#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - The function concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	c = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (c == NULL)
	{
		return (NULL);
	}

	strcpy(c, s1);
	strcat(c, s2);

	return (c);
}
