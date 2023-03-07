#include <stdio.h>
/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number of times table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
int i, j, product;
if (n < 0 || n > 15)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
product = i * j;
if (j > 0)
{
putchar(',');
putchar(' ');
}
if (product < 10)
putchar(product + '0');
else if (product < 100)
{
putchar((product / 10) + '0');
putchar((product % 10) + '0');
}
else
{
putchar((product / 100) + '0');
putchar(((product / 10) % 10) + '0');
putchar((product % 10) + '0');
}
}
putchar('\n');
}
}

