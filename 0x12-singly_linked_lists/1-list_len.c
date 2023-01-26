#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * list_len - function that returns number of elements in a likned
 * list_t list
 * @h: list to prinit
 * Return: number of element in a linked list
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
