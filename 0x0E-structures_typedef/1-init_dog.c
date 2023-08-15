#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - that give initial value for may variabls
 * @d: object of struct
 * @name: string to print
 * @age: string to print
 * @owner:string to print
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
