#include "main.h"

/**
 * cap_string - This capitalizes all the words in a string
 * @n: This is the string to be capitalized
 * Return: The pointer to the changed string
 */

char *cap_string(char *n)
{
	int index = 0;

	while (n[index])
	{
		while (!(n[index] >= 'a' && n[index] <= 'z'))
		index++;
		if (n[index - 1] == ' ' ||
		n[index - 1] == '\t' ||
		n[index - 1] == '\n' ||
		n[index - 1] == ',' ||
		n[index - 1] == ';' ||
		n[index - 1] == '.' ||
		n[index - 1] == '!' ||
		n[index - 1] == '?' ||
		n[index - 1] == '"' ||
		n[index - 1] == '(' ||
		n[index - 1] == ')' ||
		n[index - 1] == '{' ||
		n[index - 1] == '}' ||
		index == 0)
		n[index] -= 32;
		index++;
	}
return (n);
}
