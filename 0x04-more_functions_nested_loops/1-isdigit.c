#include <stdio.h>
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: integer character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int main(void)
{
int c = '3';

if (_isdigit(c))
putchar('1');
else
putchar('0');

return (0);
}
