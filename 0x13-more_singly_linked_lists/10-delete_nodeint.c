#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head : is the pointer to first node
 * @index : is the index of the list
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *y, *z;

	y = *head;
	if (index != 0)
	{
		for (x = 0 ; x < index -1 && y != NULL ; x++)
		{
			y = y->next;
		}
	}
	if (y == NULL || (y->next == NULL && index != 0))
	{
		return (-1);
	}
	z = y->next;

	if (index != 0)
	{
		y->next = z->next;
		free(z);
	}
	else
	{
		free(y);
		*head = z;
	}

	return (1);
}
