/*
 * Author: Shiv Shankar Dayal
 * Date: July 5th, 2010
 * Description: Linkage of identifiers.
 */

#include <stdio.h>
#include <vis.h>

void f()
{
	extern int i;

	printf("i=%d\n",i);
	
	i=9;
}
