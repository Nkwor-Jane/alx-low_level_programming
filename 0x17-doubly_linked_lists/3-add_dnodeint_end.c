#include "lists.h"

/**
 * add_dnodeint_end - function that adds node at the end of a dlistint_t list
 * @head: pointer to head of list
 * @n: insert new node
 * Return: address of new element
 * NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	newNode->prev = temp;
	temp->next = newNode;
	return (newNode);
}
