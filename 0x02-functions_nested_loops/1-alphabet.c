#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}

putchar('\n');
}
