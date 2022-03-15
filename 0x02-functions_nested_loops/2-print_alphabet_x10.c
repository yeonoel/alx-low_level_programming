#include "main.h"

/**
 * main - prints  alphabet 10 time
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int p = 1;
while (p <= 10)
{
char n = 'a';
while (n <= 'z')
{
_putchar(n);
n++;
}
p++;
_putchar('\n');
}
return;
}
