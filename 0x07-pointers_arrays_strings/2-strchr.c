#include "main.h"
/**
 * _strchr - the entry point
 * @s:the input
 * @c: another input
 * Return: Always 0 success
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
