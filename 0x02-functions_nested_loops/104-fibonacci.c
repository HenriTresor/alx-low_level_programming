#include <stdio.h>

/**
 * main - prints the first 50 numbers in the Fibonacci sequence,
 * starting with 1 and 2, followed by a newline
 *
 * Return: 0 (Success)
 */
int main(void)
{
int i;
long int a = 0;
long int b = 1;
long int c;

for (i = 0; i < 50; i++)
{
c = a + b;
a = b;
b = c;
if (i != 49)
printf("%ld, ", c);
else
printf("%ld\n", c);
}
return (0);
}



