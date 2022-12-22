#include "main.h"

/**
 * leet - function encodes a string
 * @str: array
 * Return: array
 */

char *leet( char  *str)
{
	int i = 0, j;
	char s[] = "aAeEoOtTlL";
	char s1[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[j] == str[i])
			{
				str[i] = s1[j];
			}
		}
	}
	return (str);
}	
