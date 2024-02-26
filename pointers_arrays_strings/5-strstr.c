#include "main.h"
#include <stdio.h>
/**
 * _strstr - Locates a substring in a string.
 * @haystack: Pointer to the string to search within.
 * @needle: Pointer to the substring to search for.
 * Return: Pointer to the beginning of the located substring, or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
