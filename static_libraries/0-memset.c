#include "main.h"

/**
 * _memset - the function
 * @s: the parameter
 * @b: the other parameter
 * @n: last parameter
 *
 * Return: the function that fills memory with a constant byte
 */


char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;


	for (i = 0; i < n; i++)

	{

	s[i] = b;

	}

	return (s);
}
