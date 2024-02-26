#include <stdio.h>

/**
* main-prints "Programming is like building a, followed by a new line".
* Return: always 0.
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');

	return (0);
}

