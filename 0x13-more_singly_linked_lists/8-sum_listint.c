#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head : is the pointer to first node
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int z;

	z = 0;
	while (head != NULL)
	{
		z = z + head->n;
		head = head->next;
	}
	return (z);
}
