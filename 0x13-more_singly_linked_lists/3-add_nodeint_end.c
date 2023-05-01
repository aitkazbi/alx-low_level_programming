#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* *add_nodeint_end - add a new node at the end of a list
* @head: the head of the list
* @n: The intger to store
* Return: The adress of the new element Or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newlistint;
listint_t *temp;
newlistint = malloc(sizeof(listint_t));
if (newlistint == NULL)
return (NULL);
newlistint->n = n;
newlistint->next = NULL;
temp = *head;
if (temp == NULL)
{
*head = newlistint;
}
else
{
while (temp->next != NULL)
temp = temp->next;
temp->next = newlistint;
}
return (*head);
}
