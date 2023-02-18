#include<stdio.h>
/**
 *main - Entry point
 *
 *Return:0 (Success)
 */
int main(void)
{
int n;
int last_dig=n%10;
if(last_dig>5)
{
printf("Last digit of %d is %d and is greater than 5", n, last_dig);
}
else if(last_dig<6)
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, last_dig);
}
else
{
printf("Last digit of %d is 0 and is 0", n);
}
return (0);
}
