#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the list
 * @idx: the unsegned int index
 * @n: the int new elemnt
 * Return: the pointer to the new elemnt
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *tempo = *head;
listint_t *new = malloc(sizeof(listint_t));
unsigned int i = 0;
if (!head && !new)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (i = 0; tempo && i < idx; i++)
{
if (i == idx - 1)
{
new->next = tempo->next;
tempo->next = new;
return (new);
}
else
{
tempo = tempo->next;
}
}
return (NULL);
}
