#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
* listint_len- count number of elements
* @h:singly linked list
*
*Return: The number of elements in a linked list
*/
size_t listint_len(const listint_t *h)
{
int count = 0;

while (h != 0)
{
count++;
h = h->next;
}
return (count);
}
