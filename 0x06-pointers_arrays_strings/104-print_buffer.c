#include <stdio.h>

/**
 * print_buffer - prints a buffer 10 bytes per line.
 *
 * @b: the buffer to print
 * @size: the size of the buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
int i, j;

if (size <= 0)
printf("\n");

for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);

for (j = 0; j < 10; j++)
{
if (j + i >= size)
printf("  ");
else
printf("%02x", *(b + i + j));

if (j % 2 != 0)
printf(" ");
}

for (j = 0; j < 10; j++)
{
if (j + i >= size)
break;
if (*(b + i + j) >= ' ' && *(b + i + j) <= '~')
printf("%c", *(b + i + j));
else
printf(".");
}
printf("\n");
}
}
