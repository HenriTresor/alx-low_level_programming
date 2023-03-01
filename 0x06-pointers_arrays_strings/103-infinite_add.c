#include <stdio.h>
#include <string.h>
/**
 * infinite_Add - add two numbers
 *
 * @n1: first paramater
 * @n2: second parameter
 * @r: third parameter
 * @size_r: fourth parameter
 *
 * Return: r (Success)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r) {
int len1 = strlen(n1);
int len2 = strlen(n2);
// Check if the result can be stored in r
if (len1 + len2 + 1 > size_r) {
return 0;
}
int carry = 0;
int i, j, k;
for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0 || j >= 0 || carry > 0; i--, j--, k++) {
int digit1 = i >= 0 ? n1[i] - '0' : 0;
int digit2 = j >= 0 ? n2[j] - '0' : 0;
int sum = digit1 + digit2 + carry;
carry = sum / 10;
int digit = sum % 10;
r[k] = digit + '0';
}
// Reverse the result string
int len = strlen(r);
for (i = 0, j = len - 1; i < j; i++, j--) {
char tmp = r[i];
r[i] = r[j];
r[j] = tmp;
}
return (r);
}
