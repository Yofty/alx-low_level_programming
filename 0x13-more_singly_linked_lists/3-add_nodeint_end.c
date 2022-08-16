#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head : head is the pointer to the first node
 * @n : n is the new nod
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x, *y;

	x = *head;
	while (x && x->next != NULL)
		x = x->next;

	y = malloc(sizeof(listint_t));
	if (y == NULL)
		return (NULL);

	y->n = n;
	y->next = NULL;

	if (x)
		x->next = y;
	else
		*head = y;
	return (y);
}
