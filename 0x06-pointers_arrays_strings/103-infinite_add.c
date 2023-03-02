#include <stdio.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: If the result can be stored in r - a pointer to the result.
 *         If the result cannot be stored in r - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, len_sum = 0;
int carry = 0, digit_sum = 0;
int i, j;

while (n1[len1])
len1++;
while (n2[len2])
len2++;

if (len1 + 2 > size_r || len2 + 2 > size_r)
return (0);

r[size_r - 1] = '\0';
len_sum = size_r - 2;

for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
{
digit_sum = carry;
if (i >= 0)
digit_sum += n1[i] - '0';
if (j >= 0)
digit_sum += n2[j] - '0';

carry = digit_sum / 10;
r[len_sum--] = (digit_sum % 10) + '0';
}

if (carry)
{
if (len_sum < 0)
return (0);
r[len_sum--] = carry + '0';
}

return (r + len_sum + 1);
}
