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
if (i == 4 || i == 16)
{
letter++;
continue;
}
putchar(letter);
letter++;
}

putchar('\n');

return (0);
}


