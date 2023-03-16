#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of dlistint_t
 * @head: pointer to head
 * @index: index of node that should be deleted
 * Return: 1 if successfull
 * -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if (head == NULL)
		return (-1);

	current = (*head);
	if (index == 0 && current != NULL)
	{
		if (current->next != NULL)
			current->next->prev = NULL;
		*head = current->next;
		free(current);
		return (1);
	}
	while (current != NULL)
	{
		if (count == index)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			free(current);
			return (1);
		}
		count++;
		current = current->next;
	}
	return (-1);
}
