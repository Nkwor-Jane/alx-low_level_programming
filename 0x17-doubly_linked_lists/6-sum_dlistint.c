#include "lists.h"

/**
 * sum_dlistint - functiont that returns sum of all data of a dlistint_t
 * @head: head of list
 * Return: 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
