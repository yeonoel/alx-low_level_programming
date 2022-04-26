#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a listint_t
 * @head: the pointer to the head
 * @index: the index of the node;
 * Return: pointer to adress of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned  int i = 1;
listint_t *tempo = head;
while (tempo)
{
tempo = tempo->next;
i++;
}
if (i >= index)
{
i = 0;
if (head)
{
while (i < index)
{
head = head->next;
i++;
}
return (head);
}
}
return (NULL);
}
