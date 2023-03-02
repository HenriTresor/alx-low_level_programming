#include <stdio.h>

/**
 * _strncat - Concatenates two strings up to n bytes
 *
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to concatenate from src
 *
 * Return: Pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = j = 0;

while (dest[i] != '\0')
i++;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';
return (dest);
}
