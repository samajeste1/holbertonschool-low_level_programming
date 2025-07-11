#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Libère la mémoire d'un chien
 * @d: Pointeur vers le chien à libérer
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
