#include "main.h"

/**
 * print_number - Prints an integer
 *
 * @n: The integer to be printed
 */

void print_number(int n)
{
	int divisor, num;

	if (n == 0)
	{
		_putchar('0');
 		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	divisor = 1;
	num = n;

	while (num / 10 != 0)
	{
		divisor *= 10;
		num /= 10;
	}

	while (divisor != 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}
