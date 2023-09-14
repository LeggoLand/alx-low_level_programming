#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int digit;

	if (n < 0)
	{
	n = -n;
	}

	digit = n % 10;

	if (digit < 0)
	{
	digit = -digit;
	}
	_putchar(digit + '0');
	return (digit);
}

