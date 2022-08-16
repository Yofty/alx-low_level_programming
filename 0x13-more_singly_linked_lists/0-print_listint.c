#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h : h is the first node
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;
	const listint_t *c = h;

	while (c != NULL)
	{
		printf("%d\n", c->n);
		c = c->next;
		x++;
	}
	return (x);
}
