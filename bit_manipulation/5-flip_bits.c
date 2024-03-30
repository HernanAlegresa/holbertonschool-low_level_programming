#include "main.h"

/**
* flip_bits - Returns the number of bits needed to flip to get from one
* number to another.
* @n: The first number.
* @m: The second number.
* Return: The number of bits to flip.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int r = n | m;

	while (r > 0)
	{
		i += r & 1;
		r >>= 1;
	}

	return (i);
}
