#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* *add_node_end - add a new node at the end of a list
* @head: the head of the list
* @str: The string to store
* Return: The adress of the new element Or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
size_t i;
list_t *newlist;
list_t *temp;
newlist = malloc(sizeof(list_t));
if (newlist == NULL)
return (NULL);
newlist->str = strdup(str);
for (i = 0; str[i]; i++)
;
newlist->len = i;
newlist->next = NULL;
temp = *head;
if (temp == NULL)
{
*head = newlist;
}
else
{
while (temp->next != NULL)
temp = temp->next;
temp->next = newlist;
}
return (*head);
}
