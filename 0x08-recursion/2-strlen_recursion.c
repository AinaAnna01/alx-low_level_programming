#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: the string to be measured
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int str = 0;

	if (*s)
	{
		str++;
		str += _strlen_recursion(s + 1);
	}
	return (str);
}
