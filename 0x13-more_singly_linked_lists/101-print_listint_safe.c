#include "lists.h"
/**
 * print_listint_safe -  prints a listint_t linked list
 * @head : is the pointer to first node
 * Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t x = 0;
	long int y;

	while (head)
	{
		y = head - head->next;
		x++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (y > 0)
			head = head->next;
		else
		{
			printf("[%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (x);
}
