#include "main.h"

/**
 * _strchr - the function
 * @s: the parameter
 * @c: other parameter
 *
 *
 * Return: locates a character in a string
 */

char *_strchr(char *s, char c)
{

	while (*s)


	{

		if (*s != c)
			s++;

		else
			return (s);

	}

	if (c == '\0')

		return (s);

	return ('\0');
}
