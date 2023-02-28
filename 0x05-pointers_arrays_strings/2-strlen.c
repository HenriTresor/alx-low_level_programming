#include <stdio.h>
/*
 *_strlen - returns the length of a string
 *@s: pointer to the first character of the string
 *
 *Return: the length of the string
 */

int _strlen(char *s)
{
int length;
length=0;
while (*s != '\0')
{
length++;
s++;
}
return length;
}
