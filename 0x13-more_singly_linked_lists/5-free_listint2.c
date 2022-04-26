#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t
 * @head: double pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
listint_t *tempo;
if (*head == NULL)
{
return;
}
else
{
while (*head)
{
tempo = (*head)->next;
free(*head);
*head = tempo;
}
*head = NULL;
}
}
