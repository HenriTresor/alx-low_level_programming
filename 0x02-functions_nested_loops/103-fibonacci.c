#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int a = 1, b = 2, c, sum = 2, digits = 1, digit;

while (b <= 4000000)
{
c = a + b;
a = b;
b = c;

if (b % 2 == 0)
{
sum += b;
}
}

while (sum / digits > 9)
digits *= 10;

while (digits > 0)
{
digit = sum / digits;
putchar(digit + '0');
sum %= digits;
digits /= 10;
}

putchar('\n');

return (0);
}

