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
	listint_t *head2;
	listint_t *node;

	head2 = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 1024);
	add_nodeint_end(&head, 402);
	print_listint_safe(head2);
	head = NULL;
	node = add_nodeint(&head, 0);
	print_listint_safe(head);
	return (0);
}
