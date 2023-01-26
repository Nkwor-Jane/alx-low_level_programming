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
	add_node(&head, "Alexandro");
	add_node(&head, "Asais");
	add_node(&head, "Damien");
	add_node(&head, "Gloria");
	print_list(head);
	return (0);
}
