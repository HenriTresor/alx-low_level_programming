#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first
 *         character, followed by a new line.
 * @str: A pointer to a null-terminated string.
 *
 * Return: Nothing.
 */
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i += 2)
{
putchar(str[i]);
}

putchar('\n');
}
