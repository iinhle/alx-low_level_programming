#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of linked list
 *
 * Description: further description
 *
 * @head: pointer to the element
 * @n: data to insert in new element
 *
 * Return: pointer to new node or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		current = *head;
		while (current)
		{
			if (current->next == NULL)
			{
				new_node->prev = current;
				current->next = new_node;
				return (new_node);
			}
			current = current->next;
		}
	}
	return (NULL);
}
