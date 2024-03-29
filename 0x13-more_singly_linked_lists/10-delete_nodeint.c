#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes node at
 * index in  a listint_t
 * @head: pointer to listint_t
 * @index: index of the node starting at 0
 * Return: NULL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *temp, *node;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
				i++;
		}
		node = temp;
		node = node->next;
		temp->next = node->next;
		free(node);
	}
	return (1);
}
