#include "lists.h"

/**
 * get_nodeint_at_index - function that returns nth node of a listint_t
 * @head: pointer to listint_t
 * @index: index of the node starting at 0
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
