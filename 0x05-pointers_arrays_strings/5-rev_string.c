#include <stdio.h>

/**
 * rev_string - Reverses the order of the characters in a string.
 * @s: A pointer to a null-terminated string.
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
int i, j, len;
char temp;

/* Determine the length of the string */
for (len = 0; s[len] != '\0'; len++)
{
}

/* Swap the characters in the string */
for (i = 0, j = len - 1; i < j; i++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}

