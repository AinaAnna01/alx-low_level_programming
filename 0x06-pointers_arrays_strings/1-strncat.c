#include "main.h"
/**
 * _strncat - to concatenate two strings
 * using n bytes from the src
 * @dest: to input a value
 * @src: to input a value
 * @n: to input a value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int d;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	d = 0;
	while (d < n && src[d] != '\0')
	{
	dest[a] = src[d];
	a++;
	d++;
	}
	dest[a] = '\0';
return (dest);
}
