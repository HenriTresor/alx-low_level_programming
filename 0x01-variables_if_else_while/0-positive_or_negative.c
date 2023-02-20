#include<stdio.h>
/**
 *main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;
n=rand();
if(n>0)
{
printf("%d is positive", n);
}
else if(n<0)
{
printf("%d is negative", n);
}
else
{
printf("%d is zero", n);
}
return (0);
}
