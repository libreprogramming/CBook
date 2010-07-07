/*
 * Author: Shiv Shankar Dayal
 * Date: July 6th, 2010
 * Description: Recursive version of Fibonacci numbers
 */

#include <stdio.h>

int fib(int n)
{
	if(n>=3)
	{
		return (fib(n-1)+fib(n-2));
	}
	else
	{
		return 1;
	}
}
int main()
{
	int n=0;   //number of fibonacci numbers to be

	printf("Enter the number up to which Fibonacci numbers to be computed\n");
	scanf("%d", &n);
	fib(n);
	printf("For n=%d Fibonacci numbner is %d\n", n, (fib(n-1)+fib(n-2)));

	return 0;
}
