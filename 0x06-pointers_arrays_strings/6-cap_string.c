#include "main.h"

/**
 * cap_string - This capitalizes all the words in a string
 * @str: This is the string to be capitalized
 * Return: The pointer to the changed string
 */

char *cap_string(char *str)
{
	int sign = 0;

	while (str[sign])
	{
		while (!(str[sign] >= 'a' && str[sign] <= 'z'))
		sign++;
		if (str[sign - 1] == ' ' ||
		str[sign - 1] == '\r' ||
		str[sign - 1] == '\t' ||
		str[sign - 1] == '.' ||
		str[sign - 1] == ',' ||
		str[sign - 1] == ';' ||
		str[sign - 1] == '&' ||
		str[sign - 1] == '"' ||
		str[sign - 1] == '?' ||
		str[sign - 1] == '{' ||
		str[sign - 1] == '}' ||
		str[sign - 1] == '[' ||
		str[sign - 1] == ']' ||
		sign == 0)
		str[sign] -= 32;
		sign++;
	}
return (str);
}
