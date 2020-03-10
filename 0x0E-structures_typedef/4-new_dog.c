#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - copies the string pointed to by src
 * @dest: char type array pointer
 * @src: char type integer variable
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * lenString - takes a pointer to an array parameter
 * Description: returns the length of a string
 * @ch: char type array pointer
 * Return: int type variable
 */

int lenString(char *ch)
{
	int i;
	int len = 0;

	for (i = 0 ; ch[i] != '\0' ; i++)
		len++;
	return (len);
}

/**
 * new_dog - takes two pointers to an array and a float parameters
 * Description: creates a new dog
 * @name: char type array pointer
 * @age: float type
 * @owner: char type array pointer
 * Return: dog_t type variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int lenName;
	int lenOwner;

	if (name == NULL || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	lenName = lenString(name);
	lenOwner = lenString(owner);

	newDog->name = malloc(lenName + 1);
	newDog->owner = malloc(lenOwner + 1);
	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->name = _strcpy(newDog->name, name);
	newDog->owner = _strcpy(newDog->owner, owner);
	newDog->age = age;

	return (newDog);

}
