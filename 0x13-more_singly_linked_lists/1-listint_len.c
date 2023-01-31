#include <stdio.h>
#include "lists.h"

/**
 * listint_len -number of elements of a lisint_t list
 * @h: number of nodes
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
