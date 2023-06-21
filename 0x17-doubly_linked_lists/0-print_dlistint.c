#include "lists.h"

/**
 * print_dlistint - print all the elements
 *
 * Description: further description
 *
 * @h: double linked list pointer
 *
 * Return: num of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	size_t count;

	current = (dlistint_t *) h;
	count = 0;
	while (current)
	{
		count++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (count);
}
