#include "dog.h"
#include <stdlib.h>
/**
 * copy -  copppies the string
 * @s :  s is the string to be coppied
 *
 * Return: the coppied string
 */
char *copy(char *s)
{
	char *a;
	int x, y;

	if (s == NULL)
		return (NULL);

	(y = 0 );
	while (s[y] != '\0')
	{
		y++;
	}
	a = malloc(sizeof(char) * (y + 1));
	if (a == NULL)
		return (NULL);

	for (x = 0 ; s[x] != '\0' ; x++)
	{
		a[x] = s[x];
	}
	a[x] = '\0';
	return (a);
}

/**
 * new_dog - creates a new dog
 * @name : name is the name given
 * @age : age is the age of the dog
 * @owner : owner is the ouner of the dog
 * Return: the new variable
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *b;
	char *c, *d;

	if (name == NULL || owner == NULL)
		return (NULL);

	b = malloc(sizeof(dog_t));

	if (b == NULL)
		return (NULL);

	c = copy(name);
	if (c == NULL)
	{
		free(b);
		return (NULL);
	}
	(*b).name = c;
	(*b).age = age;

	d = copy(owner);
	if(d == NULL)
	{
		free((*b).name);
		free(b);
		return (NULL);
	}
	(*b).owner = d;
	return (b);
}
