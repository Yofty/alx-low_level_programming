#include "lists.h"
/**
 * free_listint -  frees a listint_t list
 * @head : head is the pointer to the first node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *y;

	while ((y = head) != NULL)
	{
		head = head->next;
		free(y);
	}
}
