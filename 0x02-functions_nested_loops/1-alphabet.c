#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char n;
n = 'a';
while (n <= 'z')
{
_putchar(n);
n++;
}
_putchar('\n');
}
