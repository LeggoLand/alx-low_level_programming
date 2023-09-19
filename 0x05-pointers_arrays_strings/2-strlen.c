#include "main.h"

/**
* returns the length of a string
*
* @s: the string
*
* Return: i.
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
