/*
 * Author: Shiv Shankar Dayal
 * Date: July 5th, 2010
 * Description: Linkage of identifiers.
 */

#include <stdio.h>

void (*f)()
{
}

int main()
{
  int *f=f();
  
  f();
  
  return 0;
}
