#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
int len = 0;
while (*(s + len) != '\0')
{
len++;
}
return (len);
}

/**
 * puts_half - prints half of a string
 * @str: pointer to the string
 */
void puts_half(char *str)
{
int len = _strlen(str);
int i, start;
if (len % 2 == 0)
{
start = len / 2;
}
else
{
start = (len - 1) / 2 + 1;
for (i = start; i < len; i++)
{
putchar(*(str + i));
}
}
putchar('\n');
}
