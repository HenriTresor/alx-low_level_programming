#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: the input string
 *
 * Return: the integer value of the input string, or 0 if there are no numbers
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;

while (*s)
{
if (*s == '-')
sign = -sign;
else if (*s >= '0' && *s <= '9')
result = result * 10 + (*s - '0');
else if (result)
break;

s++;
}

return (sign *result);
}
