#include <stdio.h>
/**
 * mul - multiplies two integers
 * @a: first integer to be multiplied
 * @b: second integer to be multiplied
 *
 * Return: the product of a and b
 */
int mul(int a, int b)
{
/* Multiply the two integers and store the result in a variable */
int result = a * b;

/* Print each digit of the result using putchar */
if (result < 0)
{
putchar('-');
result = -result;
}
if (result / 10)
mul(result / 10, b);
putchar(result % 10 + '0');

/* Return the product of a and b */
return (a * b);
}
