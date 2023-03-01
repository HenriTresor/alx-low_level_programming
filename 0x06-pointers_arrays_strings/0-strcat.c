#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 *
 * Return: Pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;
/* Find the end of dest */
for (i = 0; dest[i] != '\0'; i++)
{
;
}
/* Copy src to the end of dest */
for (j = 0; src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
/* Add terminating null byte */
dest[i + j] = '\0';
return dest;
}
