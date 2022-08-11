#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head : is the head of node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *a, *b;

	a = head;
	while (a != NULL)
	{
		b = a->next;
		free(a->str);
		free(a);
		a = b;
	}
}
