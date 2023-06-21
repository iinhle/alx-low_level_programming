#include "lists.h"

/**
 * dlistint_len - short description
 *
 * Description: long description
 *
 * @h: double linked list pointer
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current;
	size_t num;

	current = (dlistint_t *) h;
	num = 0;
	while (current)
	{
		num++;
		current = current->next;
	}
	return (num);
}
