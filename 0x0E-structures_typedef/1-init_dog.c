#include <stdlib.h>
#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog
 * @d : d is the array
 * @name : name is the name given
 * @age : age is the age of the dog
 * @owner : owner is the owner of the dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	else
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}
