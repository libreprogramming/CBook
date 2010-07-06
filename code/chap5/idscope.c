/*
 * Author: Shiv Shankar Dayal
 * Date: July 5th, 2010
 * Description: Scope of identifiers.
 */

#include <stdio.h>

int main()
{
	int i=5;
	if(i==5)
	{
		int i=7;
		printf("i=%d\n",i);
	}
	printf("i=%d\n",i);

	return 0;
}
