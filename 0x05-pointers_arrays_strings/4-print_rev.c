#include <stdio.h>
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to the first character of the string
 *
 * Return: void
 */
void print_rev(char *s)
{
    int i = 0;
    int len = 0;

    while (s[i] != '\0')
    {
        len++;
        i++;
    }

    for (i = len - 1; i >= 0; i--)
    {
        _putchar(s[i]);
    }

    _putchar('\n');
}
