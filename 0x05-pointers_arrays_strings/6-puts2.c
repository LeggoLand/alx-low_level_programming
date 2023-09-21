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
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	while (i < j)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
