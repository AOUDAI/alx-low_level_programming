#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print a struct dog.
 * @d: The struct dog.
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
		if (d->name == NULL && d->owner == NULL)
			printf("Age: %f\n", (float)0);
		else
			printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
	}
}
