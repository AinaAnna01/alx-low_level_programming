#include "main.h"
/**
 * _strcmp - to compare string values
 * @s1: to input the value
 * @s2: to input the value
 * Return: s1[a] - s2[a]
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
return (0);
}
