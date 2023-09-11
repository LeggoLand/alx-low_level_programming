#include <stdio.h>

/**
 * main - Prints single digits numbers of base 10 from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
