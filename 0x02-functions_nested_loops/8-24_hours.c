#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from
 * 00:00 to 23:59
 */
void jack_bauer(void)
{
int hour, minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
putchar('0' + (hour / 10));
putchar('0' + (hour % 10));
putchar(':');
putchar('0' + (minute / 10));
putchar('0' + (minute % 10));
putchar('\n');
}
}
}

