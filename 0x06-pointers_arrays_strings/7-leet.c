#include "main.h"

/**
 * leet - function
 * @str: array
 * Description: encode string in 1337
 * Return: Always 0.
 */

char *leet(char *str)
{
	int i = 0, j;
	char s[] = "aAeEoOtTlL";
	char s1[] = "4433007711";

	for (; str[i] != '\0'; i++)
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
