#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head : is the head of the node
 * @str : is the string
 * Return: list_t(the head)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a, *t;
	size_t x;

	a = malloc(sizeof(list_t));
	if ( a == NULL)
		return (NULL);

	a->str = strdup(str);

	x = 0;
	while (str[x])
	{
		x++;
	}
	a->len = x;
	a->next = NULL;
	t = *head;

	if (t != NULL)
	{
		while (t->next != NULL)
		{
			t = t->next;
		}
		t->next = a;
	}
	else
	{
		*head = a;
	}
	return (*head);
}
