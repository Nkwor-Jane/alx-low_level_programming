#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * main - check the code
 * Return: Always 0
 */

int main(void)
{
	listint_t *head;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 1024);
	add_nodeint_end(&head, 402);
	print_listint(head);
	printf("----------------------------\n");
	delete_nodeint_at_index(&head, 5)
		;
	print_listint(head);
	return (0);
}
