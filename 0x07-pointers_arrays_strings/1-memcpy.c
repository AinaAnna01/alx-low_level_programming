#include "main.h"
/**
 * _memcpy - the function that copies the memory area
 * @dest: memory where it is stored
 * @src: memory where it is copied
 * @n: the number of bytes
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int i = 0;

	for (r = 0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
