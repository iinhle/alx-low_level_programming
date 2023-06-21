#include "lists.h"

/**
 * add_dnodeint - adds a new node at the begining of a linked list
 *
 * Description: further description
 *
 * @head: Pointer to the first node in the list
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

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
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
		return (new_node);
	}
}
