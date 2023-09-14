#include <stdio.h>

/**
* main - Prints first 50 Fibonacci numbers
*
* Return: Always 0.
*/

int main(void)
{
	int n = 50;
	unsigned long fib1 = 1, fib2 = 2, next;
	int i;

	printf("%lu, %lu", fib1, fib2);

    	for (i = 3; i <= n; i++)
	{	
		next = fib1 + fib2;
		printf(", %lu", next);
		fib1 = fib2;
		fib2 = next;
	}

	printf("\n");

	return 0;
}
