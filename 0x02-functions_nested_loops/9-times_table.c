#include "main.h"

/**
 * times_table - prints the 9 times tables
 */
void times_table(void)
{
int i, j, v, s, t;
v = ',';
i = 0;
while (i <= 9)
{
j = 0;
while (j <= 9)
{
s = i *j;
if (j == 0)
{
_putchar(s + '0');
}
if (s < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(s + '0');
}
else if (s >= 10)
{
t = s;
while (t >= 10)
{
t /= 10;
}
_putchar(v);
_putchar(' ');
_putchar(t + '0');
_putchar((s % 10) + '0');
}
j++;
}
i++;
_putchar('\n');
}
}
