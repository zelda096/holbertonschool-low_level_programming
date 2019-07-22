#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - new dog
 * @name: django
 * @age: 3.5
 * @owner: jay
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *sasha;
	int i, lname, lowner;

	sasha = malloc(sizeof(*sasha));
	if (sasha == NULL || !(name) || !(owner))
	{
		free(sasha);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	sasha->name = malloc(lname + 1);
	sasha->owner = malloc(lowner + 1);

	if (!(sasha->name) || !(sasha->owner))
	{
		free(sasha->owner);
		free(sasha->name);
		free(sasha);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		sasha->name[i] = name[i];
	sasha->name[i] = '\0';

	sasha->age = age;

	for (i = 0; i < lowner; i++)
		sasha->owner[i] = owner[i];
	sasha->owner[i] = '\0';

	return (sasha);
}
