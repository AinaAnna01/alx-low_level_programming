
#include "main.h"

/**
 * factorial - function that returnsthe factorial of a given number
 * @n: the number to return the factorial
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
