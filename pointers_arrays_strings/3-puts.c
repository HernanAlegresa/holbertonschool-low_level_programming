#include "main.h"
#include <stdio.h>
/**
 * _puts - Prints a string followed by a new line in stdout.
 * @str: Pointer of a string.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
