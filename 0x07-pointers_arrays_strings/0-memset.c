#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte to fill the memory area with
 * @n: number of bytes to fill
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}


