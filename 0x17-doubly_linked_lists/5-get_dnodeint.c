#include "lists.h"

/**
 * get_dnodeint_at_index - get node by index
 * @head:  the list
 * @index: index of thei element
 * Return: element by index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; k < index && head->next; k++)
	{
		head = head->next;
	}
	if (k < index)
		return (NULL);
	return (head);
}
