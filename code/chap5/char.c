/*
 * Author: Shiv Shankar Dayal
 * Date: July 5th, 2010
 * Description: Program on demo of char.
 */

#include <stdio.h>
#include <limits.h>

int main()
{
  char c={0};
  unsigned char uc={0};

  printf("Minimum value of signed char is %d\n",SCHAR_MIN);
  printf("Maximum value of signed char is %d\n",SCHAR_MAX);
  printf("maximum value of unsigned char is %d\n", UCHAR_MAX);

  for(int i=0; i<256;i++)
    {
      printf("%d=%c\n",i,i);
    }

  return 0;
}
