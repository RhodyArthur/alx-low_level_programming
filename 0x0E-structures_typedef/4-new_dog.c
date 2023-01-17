#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - function
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_1;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		dog_1 = malloc(sizeof(dog_t));

		if (dog_1 == NULL)
			return (NULL);

		dog_1->name = malloc(sizeof(char) * name_l);

		if (dog_1->name == NULL)
		{
			free(dog_1);
			return (NULL);
		}

		dog_1->owner = malloc(sizeof(char) * own_l);

		if (dog_1->owner == NULL)
		{
			free(dog_1->name);
			free(dog_1);
			return (NULL);
		}

		dog_1->name = _strcpy(dog_1->name, name);
		dog_1->owner = _strcpy(dog_1->owner, owner);
		dog_1->age = age;
	}

	return (dog_1);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
