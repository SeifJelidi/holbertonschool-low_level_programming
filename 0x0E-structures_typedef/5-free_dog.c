#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - takes a struct parameter
 * Description: frees dogs
 * @d: pointer to dog struct
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
