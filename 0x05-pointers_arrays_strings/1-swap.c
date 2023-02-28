#include <stdio.h>
/**
 *swap_int - Entry point
 *
 *Return: null (Success)
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
