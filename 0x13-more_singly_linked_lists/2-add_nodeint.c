#include "lists.h"
/**
 * add_nodeint - adds a new node at the end of a listint_t list
 * @head : head is the pointer of the first node
 * @n : n is the new node
 * Return: listint_t(head)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *y;

	y = malloc(sizeof(listint_t));
	if (y == NULL)
		return (NULL);

	y->n = n;
	y->next = *head;
	*head = y;

	return (*head);
}
