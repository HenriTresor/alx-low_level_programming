#include <stdio.h>

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: A pointer to a null-terminated string.
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
int len = 0;
int i;

while (str[len] != '\0')
{
len++;
}

if (len % 2 == 0)
{
for (i = len / 2; i < len; i++)
{
putchar(str[i]);
}
}
else
{
for (i = (len - 1) / 2 + 1; i < len; i++)
{
putchar(str[i]);
}
}

putchar('\n');
}
