#include <stdio.h>

/**
 * main - Prints lowercase alphabets in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowerAlpha;

	for (lowerAlpha = 'z'; lowerAlpha >= 'a'; lowerAlpha--)
	{
		putchar(lowerAlpha);
	}

	putchar('\n');

	return (0);
}
