#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h : h is the linked string
 *
 * Return: number of element (x)
 */
size_t list_len(const list_t *h)
{
	size_t x;

	x = 0;
	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
