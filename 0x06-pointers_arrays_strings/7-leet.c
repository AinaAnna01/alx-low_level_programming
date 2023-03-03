#include "main.h"
#include <string.h>

/**
 * leet - to encode string into 1337
 * @n: to input the value
 * Return: n value
 */

char *leet(char *str)
{
       int b = strlen(str), c, d;
       char *s1 = "aAeEoOtTlL";
       char *s2 = "4433007711";
       
       for (c = 0; c < b; c++)
       {
	       for (d = 0; d < 10; d++)
	       {
		       if (str[c] == s1[d])
		       {
			       str[c] = s2[d];
		       }
	       }
       }
return (str);
}
