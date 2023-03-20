#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free memory allocated for dog
 * @d: pointer to dog
 */

void free_dog(dog_t *d)
{
	if (d)
	free(d);
}
