#include "main.h"

/**
* _strcat - combines two strings
*
* @dest:the string to be extended
*
* @src: the string to be appended
*
* Return: a pointer
*/

char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*i != '\0')
	{
		i++;
	}

	while (*src != '\0')
	{
		*i = *src;
		i++;
		src++;
	}

	*i = '\0';

	return (dest);
}
