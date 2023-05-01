#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * *@head: the head of the list
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{

listint_t *curr;
listint_t *temp;
temp = malloc(sizeof(listint_t));

if (head != NULL)
{
curr = *head;
while ((curr = temp) != NULL)
{
curr = curr->next;
free(temp);
}
*head = NULL;
}
}
