#ifndef DOG_STRUCT
#define DOG_STRUCT
/**
 * struct dog - structure for dog
 * @name: django
 * @age: 3.5
 * @owner: jay
 * Return: Always 0.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /* DOG */

void init_dog(struct dog *d, char *name, float age, char *owner);
