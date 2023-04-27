#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: the head of the list
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{

list_t *curr;

while ((curr = head) != NULL)
{
head =  head->next;
free(curr->str);
free(curr);
}
}
