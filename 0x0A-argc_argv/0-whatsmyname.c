#include <stdio.h>

/**p
 * main - prints its name
 * @argc: the int number of argument passed of main function
 * @argv: the char pointer table to a strings of main augumrnts
 * Return: Always 0 (Success)
 */
int main(int argc, char* argv[])
{
(void)argc;
printf("%s\n", *argv);
return (0);
}
