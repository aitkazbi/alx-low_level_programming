#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the head of the list
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{

listint_t *curr;

while ((curr = head) != NULL)
{
head =  head->next;

free(curr);
}
}
