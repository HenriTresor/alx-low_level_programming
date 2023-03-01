#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: Pointer to input string
 *
 * Return: Pointer to encoded string
 */
char *leet(char *s)
{
int i, j;
char *leet_str = "aAeEoOtTlL";
char *leet_code = "4433007711";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; leet_str[j] != '\0'; j++)
{
if (s[i] == leet_str[j])
{
s[i] = leet_code[j];
break;
}
}
}
return s;
}
