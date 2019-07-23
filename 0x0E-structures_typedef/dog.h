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
} dog;

typedef struct dog dog_t;

int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG */
