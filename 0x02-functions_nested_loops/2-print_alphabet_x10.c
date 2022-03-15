#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
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
