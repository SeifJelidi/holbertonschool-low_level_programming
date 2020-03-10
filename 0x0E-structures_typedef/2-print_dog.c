#include "dog.h"
#include <stdio.h>

/**
 * print_dog - takes a struct parameter
 * Description: prints a struct dog
 * @d: pointer to a struct
 * Return: NULL if struct is NULL
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
