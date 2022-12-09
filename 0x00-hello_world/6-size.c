#include <stdio.h>

/**
* main - Entry point
*
* Description: using main function
* this program prints sizes of various data types
* Return: 0
*/

int main(void)
{
	char a;
	int i;
	long x;
	long long y;
	float z;

	printf("Size of a char: %1d byte(s)\n", sizeof(a));
	printf("Size of an int: %1d byte(s)\n", sizeof(i));
	printf("Size of a long int: %1d byte(s)\n", sizeof(x));
	printf("Size of a long long int: %1d byte(s)\n", sizeof(y));
	printf("Size of a float: %1d byte(s)\n", sizeof(z));
	return (0);
}
