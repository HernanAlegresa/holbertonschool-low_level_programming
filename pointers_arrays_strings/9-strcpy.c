#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copies a string from src to dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * Return: Pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
