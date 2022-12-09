#include <stdio.h>

/**
 *
 * main - Entry point
 * Description: using the main function
 * this program prints sizes of various datatypes
 * Return: 0
 */

int main(void)
{
	char c;
	int i;
	long x;
	long long y;
	float f;
	
	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));				printf("Size of a long int: %ld byte(s)\n", sizeof(x));
        printf("Size of a long long int: %ld byte(s)\n", sizeof(y));			printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
