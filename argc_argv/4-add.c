#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function
 * @argc: first parameter
 * @argv: second parameter
 * Return: Adds positive numbers
 */
int main(int argc, char *argv[])
{

int sum = 0;
int num, digit;

	for (num = 1; num < argc; num++)
	{

		for (digit = 0; argv[num][digit]; digit++)
		{

			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}


	printf("%d\n", sum);

	return (0);
}
