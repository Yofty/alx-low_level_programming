#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head : head is hte pointer to first node
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int x;
	listint_t *y, *z;

	if (*head == NULL)
		return (0);
	z = *head;
	x = z->n;
	y = z->next;
	free(z);
	*head = y;
	return (x);
}
