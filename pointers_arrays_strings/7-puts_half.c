#include "main.h"
#include <stdio.h>
/**
* puts_half - Prints the second half of a string, followed by a new line.
* @str: Pointer to the string.
*/
void puts_half(char *str)
{
	int i, j;

	j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	int start = (j - 1) / 2 + 1;

	for (i = start; i < j; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
