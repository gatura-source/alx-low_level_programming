#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * add_node_end - adds a node  at the beginning
 * @head: list_t head
 * @str: name added
 *
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;
	list_t *temp;

	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
		if (*head != NULL)
		{
			(*head)->str = strdup(str);
			(*head)->len = strlen(str);
			(*head)->next = NULL;
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		add = malloc(sizeof(list_t));
		if (add != NULL)
		{
			add->str = strdup(str);
			add->len = strlen(str);
			add->next = NULL;
			temp = *head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = add;
		}
		else
		{
			return (NULL);
		}
	}
	return (*head);
}
