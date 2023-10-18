#include "main.h"
/**
 * print_triangle - prints a triangle using #
 *
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	int i, j;

	for (i = size; i > 0; i--)
	{
		for (j = 2; j <= size + 1; j++)
		{
			if (j <= i)
				_putchar(' ');

			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
