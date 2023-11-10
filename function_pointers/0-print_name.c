#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Print a name
 * @name: name to be printed
 * @f: function pointer to function that prints name
 */
void print_name(char *name, void (*f)(char *))
{

	if (name != NULL && f != NULL)
		f(name);
}
