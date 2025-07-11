#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Affiche une structure dog
 * @d: Pointeur vers la structure dog à afficher
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
