#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main-prints "Programming is like building a, followed by a new line.
*
* Return: always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand();
	printf("Last digit of %d", n);

	int lastDigit = % 10;

	printf("%d and is ", lastDigit);

	if (lastDigit > 5)
	{
		printf("is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("is 0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
