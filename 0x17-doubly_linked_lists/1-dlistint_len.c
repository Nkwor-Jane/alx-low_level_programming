#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - function that returns number of elements a dlistin_t list
 * @h: head of dlistint_t
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *holder = (dlistint_t *)h;

	if (h == NULL)
		return (0);
	while (holder != NULL)
	{
		holder = holder->next;
		count++;
	}
	return (count);
}
