#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * free_list - free a singly linked list
 * @head: list head
 *
 * Return: void on success
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	if (head != NULL)
	{
		current = head;
		while (current !=  NULL)
		{
			next = current->next;
			free(current->str);
			free(current);
			current = next;
		}
	}
	else
	{
		;
	}
}

