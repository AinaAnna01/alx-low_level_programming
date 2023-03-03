#include "main.h"

/**
 * leet - to encode string into 1337
 * @n: to input the value
 * Return: n value
 */

char *leet(char *n)
{
	int a, d;
	char *index1 = "aAeEoOtTlL";
	char *index2 = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (d = 0; d < 10; d++)
		{
			if (n[a] == index1[d])
			{
				n[a] = index2[d];
			}
		}
	}
return (n);
}
