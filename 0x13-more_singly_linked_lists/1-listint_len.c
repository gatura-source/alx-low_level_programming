#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - returns linked list size
 * @h: list head
 *
 * Return: list size
 */

size_t listint_len(const listint_t *h)
{
	size_t listlen;

	listlen = 0;
	if (h != NULL)
	{
		while (h != NULL)
		{
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

