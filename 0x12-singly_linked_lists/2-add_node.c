#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds new node at the beginning of
 * a list_t list
 * @head: pointer to head struct
 * @str: pointer to string
 * Return: pointer to list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int i = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[i])
		i++;

	temp->len = i;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
