#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints listint
 * @h: head
 *
 * Return: list size
 */

size_t print_listint(const listint_t *h)
{
	size_t listlen;

	listlen = 0;
	if (h != NULL)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			listlen++;
			h = h->next;
		}
	}
	else
	{
		;
	}
	return (listlen);
}
