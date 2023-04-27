#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - len of a singly linked list
 * @h: singly linked list
 *
 * Return: size of a singly linked list
 */

size_t list_len(const list_t *h)
{
	size_t listlen;

	listlen = 0;
	if (h != NULL)
	{
		while (h != NULL)
		{
			h = (h->next);
			listlen++;
		}
	}
	else
	{
		;
	}
	return (listlen);
}
