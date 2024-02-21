#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer in the string.
 */
void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		putchar(s[j]);
	}

	putchar('\n');
}