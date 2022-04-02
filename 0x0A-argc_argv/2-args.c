#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: the int number of function passed to the main function
 * @argv: the char table pointer to the string
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
