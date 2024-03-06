#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - the function name
 * @a: the first parameter
 * @b: the second parameter
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);

}

/**
 * op_sub - the name of the function
 * @a: the first parameter
 * @b: the second parameter
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the name of the function
 * @a: The first parameter
 * @b: The second parameter
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{

	return (a * b);
}


/**
 * op_div - the name of the function
 * @a: the first parameter
 * @b: the second parameter
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - the name of the funtion
 * @a: the first parameter
 * @b: the second parameter
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
