#include "main.h"

/**
 * _strncpy - to copy a string
 * @dest: to input value
 * @src: to input value
 * @n: to input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int d;

	d = 0;
	while (d < n && src[d] != '\0')
	{
		dest[d] = src[d];
		d++;
	}
	while (d < n)
	{
		dest[d] = '\0';
		d++;
	}
return (dest);
}
