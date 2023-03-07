#include "main.h"

/**
 * _memset - fill a memory block with a specified value
 * @s: the starting address of the memory to be filled
 * @b: the desired value
 * @n: the number of bytes to be changed
 * Return: the changed array for n bytes with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
