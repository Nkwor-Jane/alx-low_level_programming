#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all elements of a lisint_t list
 * @h: number of nodes
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
