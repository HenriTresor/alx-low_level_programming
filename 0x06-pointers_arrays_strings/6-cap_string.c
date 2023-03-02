#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string
 *
 * @str: Pointer to the string to be modified
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
int i;
int capitalize = 1;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
capitalize = 1;
}
else if (capitalize && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
capitalize = 0;
}
else
{
capitalize = 0;
}
}

return (str);
}
