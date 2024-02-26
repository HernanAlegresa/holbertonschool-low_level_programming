#include <stdio.h>

/**
* main-prints "Programming is like building a, followed by a new line.
* Return: always 0.
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar('0' + digit);
	}

	for (digit = 0; digit < 6; digit++)
	{
		putchar('a' + digit);
	}

	putchar('\n');

	return (0);
}

