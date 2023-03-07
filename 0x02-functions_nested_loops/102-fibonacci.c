#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int i, fib[50];

fib[0] = 1;
fib[1] = 2;

for (i = 2; i < 50; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}

for (i = 0; i < 49; i++)
{
putchar(fib[i] / 100 + '0');
putchar(fib[i] / 10 % 10 + '0');
putchar(fib[i] % 10 + '0');
putchar(',');
putchar(' ');
}

putchar(fib[49] / 100 + '0');
putchar(fib[49] / 10 % 10 + '0');
putchar(fib[49] % 10 + '0');
putchar('\n');
return (0);
}

