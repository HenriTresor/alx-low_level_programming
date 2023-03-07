#include <stdio.h>
/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times using putchar
 */
void print_alphabet_x10(void)
{
char letter;
int i;

for (i = 0; i < 10; i++)
{
letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}

putchar('\n');
}
}
