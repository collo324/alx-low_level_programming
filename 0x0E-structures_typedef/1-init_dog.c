#include "dog.h"
/**
 * init_dog - initialize a variable
 * @d: pointer to struct
 * @name: pointer to char name's
 * @age: age's dog
 * @owner:pointer to char owner's
 * Return: No
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
