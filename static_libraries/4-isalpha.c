#include <stdio.h>
#include "main.h"
/**
 * _isalpha - this
 *
 * @c: dale
 *
 * Return: ok
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
