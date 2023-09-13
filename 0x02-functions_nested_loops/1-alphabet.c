#include "main.h"

/**
 *  * print_alphabet - Prints the alphabets in lowercase
 *
 */

void print_alphabet(void)
{
	char lowerAlpha;

	for (lowerAlpha = 'a'; lowerAlpha <= 'z'; lowerAlpha++)
	{
		_putchar(lowerAlpha);
	}

	putchar('\n');
}
