#include "lists.h"

/**
 * free_dlistint - Frees a list
 *
 * Description:Further description
 *
 * @head: Linked lists to be freed
 *
 * Return: return description
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while (head)
	{
		head = head->next;
		free(current);
		current = head;
	}
}
