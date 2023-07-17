#include "dog.h"
#include<stdio.h>
/**
 * print_dog - prints dog info
 * @d: ptr to dog
 * Rerurn: void
*/

void print_dog(struct dog *d)
{
	if (!d)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	(d->age) ? printf("Age: %f\n", d->age) : printf("Age: (nil)\n");
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
