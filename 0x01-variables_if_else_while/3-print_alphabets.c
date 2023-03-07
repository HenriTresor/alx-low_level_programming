#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char letter = 'a';
int i;

for (i = 0; i < 26; i++)
{
putchar(letter);
letter++;
}

letter = 'A';
for (i = 0; i < 26; i++)
{
putchar(letter);
letter++;
}

putchar('\n');

return (0);
}


