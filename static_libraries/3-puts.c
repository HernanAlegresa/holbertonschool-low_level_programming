#include <stdio.h>
#include "main.h"
/**
 * _puts - this
 * @str: Always
 */

void _puts(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; i++)
{
	putchar(str[i]);
}
	putchar ('\n');

}
