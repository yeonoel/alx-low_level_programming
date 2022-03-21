#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: one of the int pointer
 * @b: one of the int pointer
 */
void swap_int(int *a, int *b)
{
int n;

n = *b;
*b = *a;
*a = n;
}
