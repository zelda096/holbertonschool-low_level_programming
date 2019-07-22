#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - django free
 * Description: frees allocated dogs.
 * @d: Dog free
 * Return: none
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
