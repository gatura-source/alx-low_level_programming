#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * pop_listint - pops head node and returns n
 * @h: head
 *
 * Return: n or 0
 */

int pop_listint(listint_t **h)
{
	listint_t *current_node;
	listint_t *previous_node;
	int ret;

	if (*h == NULL)
	{
		return (0);
	}
	else
	{
		current_node = *h;
		previous_node = NULL;
		while(current_node != NULL && current_node != *h)
		{
			previous_node = current_node;
			current_node = current_node->next;
		}
		if (previous_node == NULL)
		{
			*h = current_node->next;
		}
		else
		{
			previous_node->next = current_node->next;
		}
		ret = current_node->n;
		free(current_node);
	}
	return (ret);
}


