/*
 * Copyright (C) 2010, shiv Shankar Dayal
 * This file is part of Learn Correct programming.

 * This program is free software. All conditions of GNU GPLv3 or later are
 * applicable.

 * You should have received a copy of the GNU GPLv3 along with this document. If 
 * not, see <http://www.gnu.org/licenses/>.
 * Disclaimer: Any damage or loss of data because of programs given in this
 * will bear no responsibility to author under any circumstances.
 
 * Author: Shiv Shankar Dayal
 * Date: July 6th, 2010
 * Description: Iterative version of Fibonacci numbers
 */

#include <stdio.h>

int main()
{
  int f1=1;  //value of first Fibonacci number
  int f2=1;  //value of second Fibonacci number
  int temp;

  int n=0;  //number of fibonacci numbers to be
            //computed other than f1 and f2

  printf("Enter the number of Fibonacci numbers to be computed\n");
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    {
      temp = f2;
      f2=f1+f2;
      f1=temp;
      printf("The %dth Fibbonacci number is %d\n",i+2,f2);
    }
  return 0;
}	
