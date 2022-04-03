#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the int number of the main arguments
 * @argv: the char of pointer table <of strings
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
int x, i, result;
result = 1;
if (argc < 3)
{
printf("Error\n");
return (1);
}
else
{
for (i = 1; i < argc; i++)
{
x = strtol(argv[i], NULL, 10);
result = result *x;
}
printf("%d\n", result);
}
return (0);
}
