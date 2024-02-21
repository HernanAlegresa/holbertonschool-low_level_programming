#include "main.h"
#include <stdio.h>
/**
 * _puts - Prints a string followed by a new line in stdout.
 * @str: Pointer of a string.
 */
void _puts(char *str)
{
	char *ptr;

	for (ptr = str; *ptr != '\0'; ptr++)
	{
		putchar(*str);
	}
	putchar('\n');
}
