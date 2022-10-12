#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: %s", "(nil)");
	if (d->owner == NULL)
		printf("Owner: %s", "(nil)");

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
