#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int i,j;
  int m = 96;
  for (i = 0; i < 26; i++)
    {
    m = m + 1;
    putchar(m);
    }
  for (j = 'A'; j <= 'Z'; j++)
    {
    putchar(j);
    if (j == 'Z')
      {
      putchar('\n');
      }
    }
    
  return (0);

}
