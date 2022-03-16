#include "main.h"

/**
 * jack_bauer - prints minute of the day jack Bauer
 */
void jack_bauer(void)
{
int n, p, x, t;
n = 48;
while (n <= '2')
{
p = '0';
while (p <= '3')
{
x = '0';
while (x <= '5')
{
t = '0';
while (t <= '9')
{
_putchar(n);
_putchar(p);
_putchar(':');
_putchar(x);
_putchar(t);
_putchar('\n');
t++;
}
x++;
}
p++;
}
n++;
}
}
