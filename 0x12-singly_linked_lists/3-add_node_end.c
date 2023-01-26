#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds new node at the end of
 * a list_t list
 * @head: pointer to head struct
 * @str: pointer to string
 * Return: pointer to list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *mode, *temp;
	unsigned int i = 0;

	mode = malloc(sizeof(list_t));
	if (mode == NULL)
		return (NULL);

	while (str[i])
		i++;

	mode->len = i;
	mode->str = strdup(str);

	if (*head == NULL)
	{
		mode->next = *head;
		*head = mode;
	}
	else
	{
		mode->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = mode;
	}
	return (mode);
}
