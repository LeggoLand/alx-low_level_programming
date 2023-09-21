#include "main.h"

/**
* rev_string - reverses a string
*
* @s: the string to be reversed
*
* Return: nothing
*/

void rev_string(char *s)
{
	int textlen = 0;
	char *head, *tail, bin;

	/* while loop to calculate the length of a string*/

	while (s[textlen] != '\0')
	{
		textlen++;
	}

	head = s;
	tail = s + textlen - 1;

	/* while loop to swap chars*/

	while (head < tail)
	{
		bin = *head;
		*head = *tail;
		*tail = bin;

		head++;
		tail--;
	}
}
