#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_dog -  function that prints a struct dog
 * @d: pointer
 * Description: This function prints the contents of a dog structure
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
		return;
	if (d->name == NULL)
		d->name = "nil";
	if (d->owner == NULL)
		d->owner = "nil";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
