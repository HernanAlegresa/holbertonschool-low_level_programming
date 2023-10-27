#include <stdio.h>
#include "main.h"

/**
 * _strncat - this is the function
 * @dest: a variable
 * @src: a variable
 * @n: a variable
 *
 * Return: return a function that concatenates two strings
 */

char *_strncat(char *dest, char *src, int n)
{

char *temp = dest;


	while (*dest != '\0')
	{
		dest++;

	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;

	}

	dest = '\0';

	return (temp);
}
