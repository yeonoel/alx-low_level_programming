#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - check if it is prime number
 * @n: the int to check
 * Return: 1 if the input integer is a prime number
 * return 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if the number is prime recursively
 * @n: the int to check
 * @i: the int iteractor
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
if (i == 1)
{
return (1);
}
else if (n % i == 0 && i > 0)
{
return (0);
}
return (actual_prime(n, i - 1));
}
