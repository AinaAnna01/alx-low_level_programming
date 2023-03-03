#include "main.h"

/**
 * print_number - to print numbers characters
 * @n: integer params
 * Return (void)
 */

void print_number(int n)
{
	unsigned int number;

	number = n;

	if (n < 0)
	{
		_putchar('_');
		number = -number;
	}

	if (number / 10 != 0)
	{
		print_number(number / 10);
	}
	_putchar((number % 10) + '0');
}
