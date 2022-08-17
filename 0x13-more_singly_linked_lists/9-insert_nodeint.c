#include "lists.h"
/**
 * insert_nodeint_at_index - nserts a new node at a given position
 * @idx : is the index of the list
 * @head : is the pointer of first node
 * @n : is the new node
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *y, *z;

	z = *head;
	if (idx != 0)
	{
		for (x = 0 ; x < idx - 1 && z != NULL ; x++)
		{
			z = z->next;
		}
	}
	if (z == NULL && idx != 0)
		return (NULL);
	y = malloc(sizeof(listint_t));
	if (y == NULL)
		return (NULL);

	y->n = n;
	if (idx == 0)
	{
		*head = y->next;
		*head = y;
	}
	else
	{
		y->next = z->next;
		y = z->next;
	}
	return (y);
}
