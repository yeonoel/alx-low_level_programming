#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: double pointer to the head of the list
 * Return: head node data (n)
 */

int pop_listint(listint_t **head)
{
unsigned int s;
if (head == NULL || (*head) == NULL)
{
return (0);
}
else
{
listint_t *tempo;
s = 0;
tempo = (*head)->next;
s = (*head)->n;
free(*head);
*head = tempo;
return (s);
}
}
