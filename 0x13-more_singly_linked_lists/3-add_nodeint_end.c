#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 *            at the end of the node
 * @head: pointer to the first node of the list
 * @n: element int to add to new node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *end;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	end = *head;

	if (end == NULL)
		*head = new_node;
	else
	{
		while (end->next != NULL)
		end = end->next;
		end->next = new_node;
	}

	return (*head);
}
