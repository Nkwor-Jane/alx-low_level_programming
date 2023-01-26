#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that prints all the elements of s list_t list
 * @h: list to prinit
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		n++;
	}
	return (n);
}
