#include "main.h"

/**
 * print_line - draws a stringht line
 * @n: the number of time we write _ charactere
 * if n is 0 or less, the function print \n
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n > 0)
{
_putchar('_');
n--;
}
 _putchar('\n');
}
}
