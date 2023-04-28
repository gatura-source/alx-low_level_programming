#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds node to the end of a linked list
 * @h: linked list head
 * @n: int n
 *
 * Return: linked list
 */

listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *temp;
	listint_t *current;

	if (*h == NULL)
	{
		*h = malloc(sizeof(listint_t));
		if (*h != NULL)
		{
			(*h)->n = n;
			(*h)->next = NULL;
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		temp = malloc(sizeof(listint_t));
		if (temp != NULL)
		{
			temp->n = n;
			temp->next = NULL;
			current = *h;
			while (current->next != NULL)
			{
				current = current->next;
			}
			current->next = temp;
		}
		else
		{
			return (NULL);
		}
	}
	return (current);
}
