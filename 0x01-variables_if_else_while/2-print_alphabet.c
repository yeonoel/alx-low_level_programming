#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int m = 96;
 for (i = 0; i < 26; i++)
   {
     m = m + 1;
     putchar(m);
     if (i == 25)
       {
	 putchar('\n');
       }
    }
  return (0);
}
