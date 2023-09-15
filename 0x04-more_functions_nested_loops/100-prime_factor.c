#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long number = 612852475143;
	long largestPrime = -1;
	int i;

	while (number % 2 == 0)
	{
		largestPrime = 2;
		number /= 2;
	}

	for (i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			largestPrime = i;
			number /= i;
		}
	}

	if (number > 1)
	{
		largestPrime = number;
	}

	printf("%ld\n", largestPrime);

	return (0);
}
