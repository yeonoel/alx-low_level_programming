#include "main.h"

/**
 * print_square - prints a square following by a new line
 * @size: int the integer to checks
 */
void print_square(int size)
{
int n, t;
if (size <= 0)
{
_putchar('\n');
}
else
{
t = size;
while (t > 0)
{
n = size;
while (n > 0)
{
_putchar('#');
n--;
}
_putchar('\n');
t--;
}
}
}
