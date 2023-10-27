#include <stdio.h>
#include "main.h"

/**
 * _strncpy - See description
 * @dest: char type string
 * @src: char type string
 * @n: the variable
 *
 *
 * Return: Pointer to dest
 */


char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}

for (; i < n; i++)
{
	dest[i] = '\0';
	}

	return (dest);
}
