#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * add_node - adds a node  at the beginning
 * @head: list_t head
 * @str: name added
 *
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add != NULL)
	{
		add->str = strdup(str);
		add->len = strlen(str);
		add->next = *head;
		*head = add;
	}
	else
	{
		return (NULL);
	}
	return (add);
}


