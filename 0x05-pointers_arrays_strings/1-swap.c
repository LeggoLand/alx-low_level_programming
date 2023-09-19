#include "main.h"

/**
* swap_int - swaps the values of two integers
*
* @a: the integer to be swapped
*
* @b: the integer to be swapped
*
*/

void swap_int(int *a, int *b)
{
	int bin;

	bin = *a;
	*a = *b;
	*b = bin;
}
