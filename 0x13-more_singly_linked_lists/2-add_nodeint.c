#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint - adds nodes to the beginning
 * @h: linked list head
 * @n: n
 *
 * Return: listint_t
 */

listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp != NULL)
	{
		if ((*h) == NULL)
		{
			*h = malloc(sizeof(listint_t));
			if ((*h) != NULL)
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
			temp->n = n;
			temp->next = *h;
			*h = temp;
		}
	}
	else
	{
		return (NULL);
	}
	return (*h);
}
