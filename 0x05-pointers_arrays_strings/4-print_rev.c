#include <stdio.h>

/**
 * print_rev - Prints a string to stdout in reverse, followed by a new line.
 * @s: A pointer to a null-terminated string.
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
int i, len;

/* Determine the length of the string */
for (len = 0; s[len] != '\0'; len++)
{
}
/* Print the string in reverse */
for (i = len - 1; i >= 0; i--)
{
putchar(s[i]);
}

putchar('\n');
}
