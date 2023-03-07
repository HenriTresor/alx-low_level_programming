#include <stdio.h>

/**
 * print_sign - Prints the sign of a number
 *
 * @n: The number to check
 *
 * Return: 1 if positive, 0 if zero, -1 if negative.
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (1);
}
}




