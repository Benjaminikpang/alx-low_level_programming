#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int t;
	listint_t *H;
	listint_t *next;

	H = *head;

	if (index != 0)
	{
		for (t = 0; t < index - 1 && H != NULL; t++)
		{
			H = H->next;
		}
	}

	if ((index != 0 && H->next == NULL) || H == NULL)
	{
		return (-1);
	}

	next = H->next;

	if (index != 0)
	{
		H->next = next->next;
		free(next);
	}
	else
	{
		free(H);
		*head = next;
	}

	return (1);
}
