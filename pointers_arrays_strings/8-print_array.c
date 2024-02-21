#include <stdio.h>

/**
 * print_array - Prints the first n elements of an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements to print.
 */
void print_array(int *a, int n)
{
	int i = 0;
	int len = n;

	for (i = 0; i < len; i++)
	{
		printf("%d", a[i]);

		if (i < len - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
