#include "lists.h"
/**
 * reverse_listint - everses a listint_t linked list
 * @head : head is the pointer to first node
 * Return: listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x = NULL, *y = NULL;

	while (*head)
	{
		y = (*head)->next;
		(*head)->next = x;
		x = *head;
		*head = y;
	}
	*head = x;
	return (*head);
}
