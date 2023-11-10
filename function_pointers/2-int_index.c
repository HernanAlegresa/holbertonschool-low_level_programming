#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - Function name
 * @array: The array to search
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function used to compare values.
 * Return: Index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}

	return (-1);
}
