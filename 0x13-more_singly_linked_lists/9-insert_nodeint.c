#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 * Return: the address of the new node, or NULL if it
 * failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int t;
	listint_t *new;
	listint_t *H;

	H = *head;

	if (idx != 0)
	{
		for (t = 0; t < idx - 1 && H != NULL; t++)
		{
			H = H->next;
		}
	}

		if (idx != 0 && H == NULL)
			return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = H->next;
		H->next = new;
	}

	return (new);
}
