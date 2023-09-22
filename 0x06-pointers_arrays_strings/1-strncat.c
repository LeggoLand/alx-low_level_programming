#include "main.h"

/**
* _strncat - combines two strings
*
* @dest:the string to be extended
*
* @src: the string to be appended
*
* @n: max number of bytes
*
* Return: a pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}

	dest[i] = '\0';

	return (dest);
}
