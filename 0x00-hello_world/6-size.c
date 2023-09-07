/* This program prints the size of various type*/

#include <stdio.h>

int main(void)
{

	/* Display the results */
	printf("size of char: %i byte(s)\n", sizeof(char));
	printf("size of an int: %i byte(s)\n", sizeof(int));
	printf("size of a long int: %i byte(s)\n", sizeof(long int));
	printf("size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("size of a float: %i byte(s)\n", sizeof(float));

	return (0);
}
