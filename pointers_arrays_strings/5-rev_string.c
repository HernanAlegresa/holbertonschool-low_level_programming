#include <stdio.h>
#include "main.h"
/**
 * rev_string - Reverses a string, followed by a new line.
 * @s: Pointer to the string.
 */
void rev_string(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;

	i = 0;
	j = len - 1;

	while (i < j)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
