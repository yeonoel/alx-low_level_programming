#include <stdio.h>

/**
 * positive_or_negative - prints the si of the number
 */

void positive_or_negative(int c)
{
  if(c > 0)
    {
      printf("%d is positive", c);
    }
  else if(c == 0)
    {
      printf("%d is zero", c);
    }
  else
    {
      printf("%d is negative",c);
    }
}
