#include <stdio.h>

/**
* main-prints "Programming is like building a, followed by a new line".
* Return: always 0.
*/
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);

		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

