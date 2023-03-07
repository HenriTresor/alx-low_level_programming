#include <stdio.h>
/**
 * _puts - Prints a string to stdout, followed by a new line.
 * @str: A pointer to a null-terminated string.
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
}

putchar('\n');
}

