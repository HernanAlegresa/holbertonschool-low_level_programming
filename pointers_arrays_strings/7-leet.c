#include "main.h"
#include <stdio.h>
/**
 * leet - the function name
 * @letters: the parameter
 *
 *
 * Return: the value
 */
char *leet(char *letters)
{

char lookup[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

char rep[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

int i;
int j;
	for (i = 0; letters[i] != '\0'; i++)
	{

		for (j = 0; j < 10; ++j)

		{
			if (letters[i] == lookup[j])


			{
				letters[i] = rep[j];

				break;

			}

		}

	}
	return (letters);
}
