#include "dog.h"
/**
 * init_dog - inicialite the struct dog
 * @d: is the dog
 * @name: django
 * @age: 3.5
 * @owner: jay
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
