#include "lists.h"
#include <stddef.h>

/**
 * print_dlistint - function that prints all elements of a dlistin_t list
 * @h: head of dlistint_t
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *holder = (dlistint_t *)h;

	if (h == NULL)
		return (0);
	while (holder != NULL)
	{
		printf("%d\n", holder->n);
		holder = holder->next;
		count++;
	}
	return (count);
}
