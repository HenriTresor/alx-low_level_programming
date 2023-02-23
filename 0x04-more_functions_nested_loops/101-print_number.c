#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
int divisor = 1;
int num;
if (n < 0)
{
_putchar('-');
n = -n;
}
num = n;
while (num / divisor >= 10)
{
divisor *= 10;
}
while (divisor != 0)
{
_putchar(num / divisor + '0');
num %= divisor;
divisor /= 10;
}
}
