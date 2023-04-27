#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - lists out a singly linked list
 * @h: singly linked list
 *
 * Return: size of a singly linked list
 */

size_t print_list(const list_t *h)
{
	size_t listlen;

	listlen = 0;
	if (h != NULL)
	{
		while (h != NULL)
		{
			if (h->str != NULL)
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			else
			{
				printf("[0] (nil)\n");
			}
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
