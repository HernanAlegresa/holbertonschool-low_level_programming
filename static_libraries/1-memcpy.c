#include "main.h"

/**
 * _memcpy - the function
 * @dest: a parameter
 * @src: another parameter
 * @n: last parameter
 *
 *
 * Return: copied n bytes fro area src to memoery area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

	}

	return (dest);

}
