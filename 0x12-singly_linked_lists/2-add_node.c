#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node - add a new node at the beginning of a list
 * @head: the head of the list
 * @str: The string to store
 * Return: The adress of the new element Or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
size_t i;
list_t *newlist;
newlist = malloc(sizeof(list_t));
if (newlist == NULL)
return (NULL);
newlist->str = strdup(str);
for (i = 0; str[i]; i++)
;
newlist->len = i;
newlist->next = *head;
*head = newlist;
return (*head);
}
