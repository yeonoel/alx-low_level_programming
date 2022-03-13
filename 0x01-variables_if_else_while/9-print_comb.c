#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int x = ',';
for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(x);
putchar(' ');
}
}
putchar('\n');
return (0);
}
