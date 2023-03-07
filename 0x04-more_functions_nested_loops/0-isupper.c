#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: integer character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
        /* Checks if the ASCII value of the character is between 65 and 90, inclusive */
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
