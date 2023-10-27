#include <stdio.h>
#include "main.h"

/**
 * _strlen - this
 * Return: Always
 * @s: letter
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
{
		len++;

}
	return (len);
}
