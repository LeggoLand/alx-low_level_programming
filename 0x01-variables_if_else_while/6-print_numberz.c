#include <stdio.h>

/**
 * main - Prints single digits numbers of base 10 from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
	}

	putchar('\n');
	
	return (0);
}
