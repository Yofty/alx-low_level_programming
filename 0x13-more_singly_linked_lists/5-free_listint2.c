#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head : head is the pointer to first node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *x;

	while (*head != NULL)
	{
		x = (*head)->next;
		free(*head);
		*head = x;
	}
}
