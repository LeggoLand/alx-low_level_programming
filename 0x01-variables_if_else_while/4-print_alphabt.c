#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except q & e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowerAlpha;


	for (lowerAlpha = 'a'; lowerAlpha <= 'z'; lowerAlpha++)
	{
		if (lowerAlpha != 'q' && lowerAlpha != 'e')
		{
			putchar(lowerAlpha);
		}
	}

	putchar('\n');

	return (0);
}
