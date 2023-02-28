#include <stdio.h>
/**
 * _puts - Prints a string to stdout
 * @str: pointer to the first character of the string
 *
 * Return: void
 */

void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
