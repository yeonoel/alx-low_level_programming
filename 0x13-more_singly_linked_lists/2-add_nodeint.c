#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning
 * @head: double pointer to the head of the list
 * @n: the int to add
 * Return: adresse of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
if (head != NULL)
{
listint_t *tempo = malloc(sizeof(listint_t));
if (tempo != NULL)
{
tempo->n = n;
if (*head == NULL)
{
*head = tempo;
tempo->next = NULL;
return (*head);
}
else
{
tempo->next = *head;
*head = tempo;
return (*head);
}
}
else
{
return (NULL);
}
}
return (NULL);
}
