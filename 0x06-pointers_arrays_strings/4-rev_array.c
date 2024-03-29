#include "main.h"

/**
 * reverse_array - to reverse the array of integers
 * @a: the array
 * @n: the number of elements of the array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
