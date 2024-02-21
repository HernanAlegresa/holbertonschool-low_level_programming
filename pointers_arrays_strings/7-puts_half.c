#include "main.h"
#include <stdio.h>
/**
* puts_half - Prints the second half of a string, followed by a new line.
* @str: Pointer to the string.
*/
void puts_half(char *str)
{
	int i, len;

	i = 0;
	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	i = (len + 1) / 2;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
}
