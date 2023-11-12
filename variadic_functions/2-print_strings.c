#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Name of function
 * @separator: fisrt parameter
 * @n: Number of integers passed to the function
 * Return - Prints numbers.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	char *str;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(a, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(a);
}
