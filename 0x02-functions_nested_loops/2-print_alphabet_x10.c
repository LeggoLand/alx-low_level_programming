#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabets in lowercase
 *
 */

void print_alphabet_x10(void)
{
	char lowerAlpha;
	int x = 0;

	while (x < 10)
	{
		lowerAlpha = 'a';
		while (lowerAlpha <= 'z')
		{
			_putchar(lowerAlpha);
			lowerAlpha++;
		}
		_putchar('\n');
		x++;
	}
}
