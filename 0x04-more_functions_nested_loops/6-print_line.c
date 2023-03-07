#include <stdio.h>
/**
 * print_line - draws a straight line of length n using _
 * @n: the number of times the character _ should be printed
 */
void print_line(int n)
{
if (n <= 0)
{
putchar('\n');
}
else
{
int i;

for (i = 0; i < n; i++)
{
putchar('_');
}
putchar('\n');
}
}
