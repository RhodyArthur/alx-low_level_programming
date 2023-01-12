#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: s
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
		return (i);
	}

/**
 * string_noncat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2
 * Return: 0
 */

char *string_noncat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int num, i, j, length;

	num = n;

	if (s1 == NULL)
	{
		s1="";
	}
	if (s2 == NULL)
	{
		s2="";
	}
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);

	length = _strlen(s1) + num + 1;

	str = malloc(sizeof(*str) * length);

	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < num; j++)
	{
		str[i + j] = s2[j];
	}
	str[i + j] = '\0';

	return (str);
}

