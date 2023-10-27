#include <stdio.h>
#include "main.h"

/**
 * _strcat - the function
 * @dest: destination
 * @src: source
 *
 * Return: the value of the concotion
 */

char *_strcat(char *dest, char *src)
{


char *temp = dest;

	while (*dest != '\0')

	{


	dest++;

	}


	while (*src != '\0')
	{

	*dest = *src;
	dest++;
	src++;

	}

	*dest = '\0';

	return (temp);

}
