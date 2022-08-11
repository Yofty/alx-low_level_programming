#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head : is head of the node
 * @str : is hte string
 * Return: list_t(adress of the head)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *a;
	size_t x;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);

	a->str = strdup(str);

	x = 0;
	while (str[x])
	{
		x++;
	}
	a->len = x;
	a->next = *head;
	*head = a;

	return (*head);
}
