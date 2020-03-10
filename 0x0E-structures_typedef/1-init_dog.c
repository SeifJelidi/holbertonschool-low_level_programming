#include "dog.h"
#include <stdio.h>
/**
*init_dog - initialize a variable of type struct dog
*Description:function that initialize a variable of type struct dog
*@d dog: The character to print
*@name: his name - string
*@age: his age - float
*@owner:his owner - string
*Return: Nothing.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}

