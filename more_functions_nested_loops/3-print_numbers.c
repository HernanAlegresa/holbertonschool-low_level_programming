#include "main.h"
/**
 * int main(void) - prints numbers, followed by a new line.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
