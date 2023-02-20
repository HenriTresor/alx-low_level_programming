#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
char alphabet;
alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
}
while (strupr(alphabet) <= 'Z')
{
putchar(strupr(alphabet));
}
putchar('\n');
return (0);
}
