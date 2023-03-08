#include "main.h"

/**
 * _puts_recursion: print a string followed by a new line
 * @s: value
 * Return: void
 */
void _puts_recursion(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        _putchar(s[i]);
        i++;
    }
}
