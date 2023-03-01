#include "main.h"

/**

 * _strncat - Concatenates two strings up to n bytes
 *
 * @dest: Pointer to destination string
 *
 * @src: Pointer to source string
 *
 * @n: Maximum number of bytes to use from src
 *
 * Return: Pointer to resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;

/* Find the end of dest */
for (i = 0; dest[i] != '\0'; i++)
{
;
}

/* Copy src to the end of dest, up to n bytes */
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}

/* Add terminating null byte */
dest[i + j] = '\0';

return dest;
}
