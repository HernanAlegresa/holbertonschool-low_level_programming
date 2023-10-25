#include "main.h"
#include <stdio.h>
/**
 * _strspn - Gets the length of a prefix substring consisting of characters from another string.
 * @s: Pointer to the string to search for the prefix.
 * @accept: Pointer to the string containing valid characters for the prefix.
 * Return: The number of bytes in the initial segment of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				count++;
				break;
			}
			a++;
		}

		if (*a == '\0')
		{
			return (count);
		}

		s++;
	}

	return (count);
}
