#include "main.h"

/**
 * leet - Encodes a string into 1337
 *
 * @str: string to be encoded
 *
 * Return: pointer
 */

char *leet(char *str)
{
	char leet1[] = "aAeEoOtTlL";
	char leet2[] = "4433007711";

	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leet1[j]; j++)
		{
			if (str[i] == leet1[j])
			{
				str[i] = leet2[j];
				break;
			}
		}
	}

	return (str);
}
