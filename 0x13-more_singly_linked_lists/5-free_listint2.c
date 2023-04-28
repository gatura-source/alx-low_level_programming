#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint2 - frees linked list and sets head to null
 * @h: head
 *
 * Return: void
 */

void free_listint2(listint_t **h)
{
	listint_t *current_node;
	listint_t *next_node;

	if (*h == NULL)
	{
		;
	}
	else
	{
		current_node = (*h);
		while (current_node != NULL)
		{
			next_node = current_node->next;
			free(current_node);
			current_node = next_node;
		}
	}
	*h = NULL;
}
