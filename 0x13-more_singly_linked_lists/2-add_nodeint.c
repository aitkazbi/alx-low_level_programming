#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint - add a new node at the beginning of a list
 * @head: the head of the list
 * @n: The int to store
 * Return: The adress of the new element Or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *newlistint;
newlistint = malloc(sizeof(listint_t));
if (newlistint == NULL)
return (NULL);
newlistint->n = n;
newlistint->next = *head;
*head = newlistint;
return (*head);
}
