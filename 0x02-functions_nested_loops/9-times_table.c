#include <stdio.h>
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int i, j, result;

for (i = 0; i <= 9; i++)
{
putchar('0');
for (j = 1; j <= 9; j++)
{
result = i * j;
if (result < 10)
{
putchar(',');
putchar(' ');
putchar(' ');
putchar(result + '0');
}
else
{
putchar(',');
putchar(' ');
putchar(result / 10 + '0');
putchar(result % 10 + '0');
}
}
putchar('\n');
}
}
