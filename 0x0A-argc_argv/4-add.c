#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: the int number of main arguments
 * @argv: the char table of pointer
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
int i, flag, j, t, sum, x;
char alphab[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
flag = 0;
sum = 0;
if (argc == 1)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
for (t = 0; alphab[t] != '\0'; t++)
{
if (alphab[t] == *argv[i])
{
flag = 1;
break;
}
}
}
if (flag)
{
printf("Error\n");
return (1);
}
else
{
for (j = 1; j < argc; j++)
{
x = strtol(argv[j], NULL, 10);
sum = sum + x;
}
printf("%d\n", sum);
}
}
return (0);
}
