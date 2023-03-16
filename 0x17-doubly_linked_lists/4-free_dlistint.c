#include "lists.h"
/**
 * free_distint - function to free a dlistint list
 * @head: head of dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		temp->prev = NULL;
		temp->head = NULL;
		free(head);
		head = temp;
	}
}
