#include <stdio.h>
#include "main.h"
/**
 * _abs - Computes the absolute value
 * @n: The integer to be computed.
 *
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
