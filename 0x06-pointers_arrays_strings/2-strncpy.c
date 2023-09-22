#include "main.h"

/**
 * _strncpy - Copies a string
 *
 * @dest: string where characters are copied
 *
 * @src:string with characters to be copied
 *
 * @n: number of characters to copy
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
