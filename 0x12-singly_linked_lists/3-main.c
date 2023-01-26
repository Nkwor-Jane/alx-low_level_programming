#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * Return: always 0
 */

int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Anne");
	add_node_end(&head, "Colton");
	add_node_end(&head, "Daniel");
	add_node_end(&head, "Gary");
	print_list(head);
	return (0);
}
