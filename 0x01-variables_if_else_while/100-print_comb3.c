#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int y = 0;
int p = 49;
int x = ',';
for (n = 48; n < 57; n++)
{
while  (p < 58)
{
putchar(n);
putchar(p);
if (n != 56 || p != 57)
{
putchar(x);
putchar(' ');
}
p = p + 1;
}
y = y + 1;
p = 49;
p = p + y;
}
putchar('\n');
return (0);
}
