#include "lists.h"
/**
 * get_dnodeint_at_index -  functions that returns nth node of a dlistint_t
 * @head: pointer ot head
 * @index: index of the node starting from 0
 * Return: NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}
	return (NULL);
}
