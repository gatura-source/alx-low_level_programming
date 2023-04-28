#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints list
 * @h: list head
 *
 * Return: list size
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
