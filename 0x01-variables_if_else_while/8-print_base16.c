#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int p, n;
for (p = 48; p < 58; p++)
{
putchar(p);
}
for (n = 'a'; n <= 'z'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
