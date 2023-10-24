#include <stdio.h>
#include "main.h"
/**
 * cap_string - Capitalizes all words in a string.
 * @str: Pointer to the string.
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int capitalize = 1;
	char *ptr = str;

	while (*ptr)
	{
		if (is_separator(*ptr))
		{
			capitalize = 1;
		}
		else if (capitalize && *ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
			capitalize = 0;
		}
		else
		{
		capitalize = 0;
		}

		ptr++;
	}

	return str;
}
