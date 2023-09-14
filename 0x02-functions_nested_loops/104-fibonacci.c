#include <stdio.h>

/**
* main - Writes a program that finds and prints the first 98 Fibinnacci numbers
*
* Return: (Success)
*/

int main(void)
{
	unsigned int fib1 = 1, fib2 = 2, next;
	int count = 2;
	int numbers = 10;

	printf("%u, %u", fib1, fib2);

	while (count < 98)
	{
		next = fib1 + fib2;

		printf("%u, ", next);

		fib1 = fib2;
		fib2 = next;

		count++;

		if (count % numbers == 0)
		{
			printf("\n");
		}
	}

	printf("\n");

	return (0);
}
