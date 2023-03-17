#include "lists.h"

/**
 * *insert_dnodeint_at_index - function that inserts new node at given position
 * @h: pointer to head
 * @idx: index of ist where new node is added
 * @n: points to new node
 * Return: NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *newLink;
	unsigned int count = 0;

	newLink = malloc(sizeof(dlistint_t));
	if (newLink == NULL)
		return (NULL);
	newLink->n = n;
	newLink->prev = NULL;
	newLink->next = NULL;
	if (h == NULL)
		return (newLink);
	if (idx == 0)
	{
		newLink->next = (*h);
		if ((*h) != NULL)
			(*h)->prev = newLink;
		*h = newLink;
		return (newLink);
	}
	current = *h;
	while (current != NULL)
	{
		count++;
		if (count != idx)
		{
			newLink->prev = current;
			newLink->next = current->next;
			if (current->next != NULL)
				current->next->prev = newLink;
			current->next = newLink;
			return (newLink);
		}
		current = current->next;
	}
	free(newLink);
	return (NULL);
}
