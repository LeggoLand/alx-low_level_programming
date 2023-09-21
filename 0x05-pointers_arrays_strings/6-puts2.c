#include "main.h"

/**
* puts2 - prints alternative characters of a string
*
* @str: the string to be alternated
*
* Return: nothing
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}

	_putchar('\n');
}
