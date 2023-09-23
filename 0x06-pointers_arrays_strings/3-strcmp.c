#include "main.h"

/**
 * _strncmp - Compares two strings
 *
 * @s1: string to be compared
 *
 * @s2:string to be compared
 *
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
