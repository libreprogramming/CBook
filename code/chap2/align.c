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
 * Description: Demonstration of structure padding and memory alignment.
 */
 
#include <stdio.h>

typedef struct
{
  char a;
  int b;
}A;

typedef struct
{
  char a;
  int b;
  char c;
  char d;
  char e;
  int f;
}B;

typedef struct 
{
  char x;
  char y;
  int z;
}C;

typedef struct 
{
  char x;
  int z;
  char y;
}D;

int main()
{
  A a;
  B b;
  C c;
  D d;

  printf("Size of structure %c is %d\n",'A',sizeof(a));
  printf("Size of structure %c is %d\n",'B',sizeof(b));
  printf("Size of structure %c is %d\n",'C',sizeof(c));
  printf("Size of structure %c is %d\n",'D',sizeof(d));

  return 0;
}
