#include "lists.h"

/**
 * print_listint - a function that prints all elements of a list
 *
 * @h: pointer to first node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number_of_node = 1;

	 (return 0 as number of nodes when h is null)
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		/*go to the next node*/
		h = h->next;
		/*count number of nodes*/
		number_of_node++;
	}

	 print last node
	printf("%d\n", h->n);

	return (number_of_node);
}
