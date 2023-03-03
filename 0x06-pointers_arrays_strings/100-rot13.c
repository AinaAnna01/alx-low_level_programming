#include "main.h"
#include <stdio.h>

/**
 * rot13 - the encoder
 * @n: the pointer to string params
 * Return: *n
 */

char *rot13(char *n)
{
	int a;
	int d;
	char alphadata[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13data[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (d = 0; d < 52; d++)
		{
			if (n[a] == alphadata[d])
			{
				n[a] = rot13data[d];
				break;
			}
		}
	}
return (n);
}
