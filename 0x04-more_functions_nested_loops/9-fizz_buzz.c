/**
 * main - entry point, prints numbers and FizzBuzz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
putchar('F');
putchar('i');
putchar('z');
putchar('z');
putchar('B');
putchar('u');
putchar('z');
putchar('z');
putchar(' ');
}
else if (i % 3 == 0)
{
putchar('F');
putchar('i');
putchar('z');
putchar('z');
putchar(' ');
}
else if (i % 5 == 0)
{
putchar('B');
putchar('u');
putchar('z');
putchar('z');
putchar(' ');
}
else
{
/* Convert the integer to a string and print it */
int j = i, k = 1;
while (j / 10 > 0)
{
k *= 10;
j /= 10;
}
while (k > 0)
{
putchar(j % 10 + '0');
j = i / k % 10;
k /= 10;
}
putchar(' ');
}
}
putchar('\n');
return (0);
}







