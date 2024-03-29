#include "lists.h"

/**
 * free_listint2 - a function that frees the list and sets head to NULL
 * @head: pointer to the first node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *node;

	if (head != NULL)
	{
		current = *head;

		/*iterate through the whole list*/
		/*while setting the current node to temp*/
		while ((node = current) != NULL)
		{
			current = current->next;
			free(node);
		}

		*head = NULL;
	}
}
