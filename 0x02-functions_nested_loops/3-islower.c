#include "main.h"

/**
 * _islower - Checks for lower characters
 *
 * @c: The character to check
 *
 * Return: 1 if c is lower, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
