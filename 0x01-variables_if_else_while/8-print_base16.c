#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hexDigit;

	for (hexDigit = '0'; hexDigit <= '9' ; hexDigit++)
	{
		putchar(hexDigit);
	}

	for (hexDigit = 'a'; hexDigit <= 'f' ; hexDigit++)
	{
		putchar(hexDigit);
	}

	putchar('\n');

	return (0);
}
