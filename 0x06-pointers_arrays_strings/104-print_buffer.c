#include <stdio.h>
/**
 * print_buffer - prints buffer
 *
 * Return: null
 */
void print_buffer(char *b, int size) {
int i, j;
for (i = 0; i < size; i += 10) {
printf("%08x: ", i);
for (j = 0; j < 10; j++) {
if (j + i < size)
printf("%02x ", (unsigned char)b[i+j]);
else
printf("   ");
if (j == 5)
printf(" ");
}
printf(" ");
for (j = 0; j < 10; j++) {
if (j + i < size) {
if (b[i+j] >= ' ' && b[i+j] <= '~')
{
printf("%c", b[i+j]);
}
else
{
printf(".");
}
}
}
printf("\n");
}
if (size <= 0)
printf("\n");
}
