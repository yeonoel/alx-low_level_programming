#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
int t, x, s;
int i;
t = 0;
x = 0;
s = 0;
for (i = 0; i < 1024; ++i)
{
if ((i % 3) == 0)
{
t = t + i;
}
else if ((i % 5) == 0)
{
x = x + i;
}
}
s = t + x;
printf("%d\n", s);
return (0);
}
