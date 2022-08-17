#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head : is the pointer to first node
 * @index : is the index of the node
 * Return: listint_t(head)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0 ; x < index && head != NULL ; x++)
	{
		head = head->next;
	}
	return (head);
}
