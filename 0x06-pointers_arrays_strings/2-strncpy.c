#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Maximum number of bytes to copy
 *
 * Return: Pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
/* Copy up to n bytes from src to dest */
for (i = 0; i < n && src[i] != '\0'; i++) {
dest[i] = src[i];
}
/* Add null bytes to fill remaining space in dest */
for (; i < n; i++) {
dest[i] = '\0';
}
return dest;
}
