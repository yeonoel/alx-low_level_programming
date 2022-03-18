#include "main.h"

/**
 * more_numbers - prints 10times the numbers
 */
void more_numbers(void)
{
int n, x, t;
n = 0;
while (n < 10)
{
x = 0;
while (x <= 14)
{
t = x;
if (t >= 10)
{
while (t >= 10)
{
t /= 10;
}
_putchar(t + '0');
}
_putchar((x % 10) + '0');
x++;
}
_putchar('\n');
n++;
}
}
