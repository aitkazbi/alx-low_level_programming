#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* reverse_listint - thats reverses a linked list.
* @head: head of a list.
*
* Return: a pointer to the first node of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
