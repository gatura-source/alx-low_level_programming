#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint - frees a linked list
 * @h: head
 *
 * Return: void
 */

void free_listint(listint_t *h)
{
	listint_t *current_node;
	listint_t *next_node;

	if (h != NULL)
	{
		current_node = h;
		if (current_node != NULL)
		{
			while (current_node != NULL)
			{
				next_node = current_node->next;
				free(current_node->next);
				free(current_node);
				current_node = next_node;
			}
		}
	}
	else
	{
		;
	}
}


