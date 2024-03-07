#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Name of function
 * @separator: fisrt parameter
 * @n: Number of integers passed to the function
 * Return - Prints numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, int));

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(a);

	printf("\n");
}
