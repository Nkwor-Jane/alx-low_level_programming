#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes head node of listint_t
 * @head: pointer to listint_t
 * Return: lists of head
 */

int pop_listint(listint_t **head)
{
	listint_t *curr, *temp;
	int i;

	if (head == NULL)
		return (0);
	temp = curr = *head;
	if (*head)
	{
		i = curr->n;
		*head = curr->next;
		free(temp);
	}
	else
		i = 0;
	return (i);
}
