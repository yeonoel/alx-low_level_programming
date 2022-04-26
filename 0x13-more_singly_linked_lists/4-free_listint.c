#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint_t list
 * @head: the pointer to the head of the list
 */

void free_listint(listint_t *head)
{
listint_t *tempo;
while (head)
{
tempo = head;
head = head->next;
free(tempo);
}
free(head);
}
