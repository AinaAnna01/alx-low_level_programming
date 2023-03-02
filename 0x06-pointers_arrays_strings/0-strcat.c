#include "main.h"

/**
 * _strcat - use this to concatenates two strings
 * @dest: to input value
 * @src: to input value
 * Return: 0
*/

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int d = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[d] != '\0')
	{
		dest[a] = src[d];
		a++;
		d++;
	}
	dest[a] = '\0';
	return (dest);
}
