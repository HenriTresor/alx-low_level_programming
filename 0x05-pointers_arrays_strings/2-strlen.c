#include <stdio.h>
/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to a null-terminated string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}

return (len);
}

