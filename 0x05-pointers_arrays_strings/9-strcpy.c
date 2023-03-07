#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src, including the
 *           terminating null byte, to the buffer pointed to by dest.
 * @dest: pointer to the buffer where the string will be copied
 * @src: pointer to the string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';

return (dest);
}

