#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - function that frees a list
 * @h: pointer listint_t 
 * Return: size of list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	temp = *h;
	while (temp)
	{
		temp = *h;
		temp = temp->next;
		free_list(temp);
		count++;
	}
	*h = NULL;
	return (count);
}

/**
 * free_list - function to free listint_t
 * @head: pointer to listint_t
 * Return: nothing
 */

void free_list(listint_t *head)
{
	listint_t *temp;

	if (head)
	{
		temp = head;
		temp = temp->next;
		free(temp);
		free_list(temp);
	}
	free(head);
}
