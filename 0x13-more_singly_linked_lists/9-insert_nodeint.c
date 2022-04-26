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
listint_t *s;
listint_t *tempo = *head;
listint_t *new = malloc(sizeof(listint_t));
unsigned int i = 0;
while (tempo && i < idx)
{
tempo = tempo->next;
i++;
}
if (tempo != NULL)
{
if (new)
{
s = tempo->next;
tempo->next = new;
new->n = n;
new->next = s;
return (new);
}
}
return (NULL);
}
