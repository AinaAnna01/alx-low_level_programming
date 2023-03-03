#include "main.h"

/**
 * string_toupper - to change all lowercases to uppercase
 * @n: the point
 * Return: n
 */

char *string_toupper(char *n)
{
	int a;

	a = 0;
	while (n[a] != '\0')
	{
		if (n[a] >= 'a' && n[a] <= 'z')
			n[a] = n[a] - 32;
		a++;
	}
return (n);
}
