#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list- Prints all the element of list
 * @h:singly linked list
 *
 *Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
size_t el;

	el = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		el++;
	}
	return (el);
}
