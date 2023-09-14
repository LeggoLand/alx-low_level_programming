#include <stdio.h>

/**
* main - finds and prints the sum of the even-valued terms
*
* Return: Always 0 (Success)
*/

int main(void)
{
	unsigned int fib1 = 1, fib2 = 2, next;
	unsigned int sum = 0;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
		{
			sum += fib1;
		}

		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
	}

	printf("%u\n", sum);

	return (0);
}
