#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
int y, x, t, v, i, p;
y = x = p = 0;
v = ',';
for (i = 48; i <= 57; i++)
{
t = 49;
t = t + x;
while (t <= 57)
{
n = 50;
n = n + y;
while (n <= 57)
{
putchar(i);
putchar(t);
putchar(n);
if (i != 55 || t != 56 || n != 57)
c{
putchar(v);
putchar(' ');
}
n = n + 1;
}
y = y + 1;
t = t + 1;
}
x = x + 1;
y = y + 1;
if (t == 58)
{
p = p + 1;
x = y = p;
}
}
putchar('\n');
return (0);
}
