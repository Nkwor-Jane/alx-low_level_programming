#include "lists.h"

/**
 *sum_listint - function that returns sum of all data of a listint_t
 * @head: pointer to listint_t
 * Return: NULL
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
