#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to listint_t
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *curr;

	if (head == NULL)
		return;
	curr = *head;
	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	*head  = NULL;
}
