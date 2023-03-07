#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates a random valid password for 101-crackme
 *
 * Return: 0
 */
int main(void)
{
char password[12];
int i, sum, diff;

srand(time(NULL));

/* Generate first 7 characters */
for (i = 0; i < 7; i++)
password[i] = rand() % 10 + '0';

/* Generate last 5 characters */
sum = 0;
for (i = 0; i < 7; i++)
sum += password[i] - '0';
diff = ('9' - '0' + 1) * 7 - sum;
if (diff <= 0 || diff > 9)
password[7] = '0';
else
password[7] = diff + '0';
for (i = 8; i < 12; i++)
password[i] = rand() % 10 + '0';

/* Print password */
for (i = 0; i < 12; i++)
putchar(password[i]);
putchar('\n');

return (0);
}




