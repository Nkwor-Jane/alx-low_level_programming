#include "lists.h"

/**
 * add_dnodeint - function that adds node at the beginning of a dlistint_t list
 * @head: pointer to head of list
 * @n: insert new node
 * Return: address of new element
 * NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);
	newNode->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = newNode;
	}
	(*head) = newNode;
	return (newNode);
}
