#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @z: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int z)
{
int s;
if (z < 0)
{
z = -z;
}
s = z % 10;
if (s < 0)
{
s = -s;
}
_putchar(s + '0');
return (s);
}
