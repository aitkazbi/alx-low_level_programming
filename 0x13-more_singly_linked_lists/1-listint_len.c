#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Return number of element in a linked list
 * * @h: pointer
 **Return: The number of elements in a linked list
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
