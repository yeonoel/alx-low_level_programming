#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, n, z;
for (i = 1; i <= 100; i++)
{

n = i % 3;
z = i % 5;
if (n == 0 && z != 0)
{
printf("Fizz");
}
else if (z == 0 && n != 0)
{
printf("Buzz");
}
else if (z == 0 && n == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", i);
}
if (i != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
