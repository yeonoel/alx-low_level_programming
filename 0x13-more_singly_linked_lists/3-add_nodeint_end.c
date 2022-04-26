#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds new node at the end of a list
 * @head: double pointer to the head of the list
 * @n: the new int elemnt
 * Return: the adresse of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
if (head != NULL)
{
listint_t *last = *head;
listint_t *tempo = malloc(sizeof(listint_t));
if (tempo == NULL)
{
return (NULL);
}
else
{
tempo->n = n;
if (*head == NULL)
{
tempo->next = NULL;
*head = tempo;
return (*head);
}
else
{
while (last->next != NULL)
{
last = last->next;
}
last->next = tempo;
last = tempo;
return (last);
}
}
}
return (NULL);
}
