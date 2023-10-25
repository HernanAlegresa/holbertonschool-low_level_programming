#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing the bytes to search for.
 * Return: Pointer to the first occurrence in s of any byte in accept, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept; // Initialize a pointer to accept in each iteration.

		while (*a)
		{
			if (*s == *a)
			{
				return (s); // Return the pointer to the first matching byte.
			}
			a++;
		}

		s++; // Move to the next byte in s.
	}

	return (NULL); // If no matching byte is found, return NULL.
}
