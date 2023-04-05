#include "lists.h"

/* listint_t: functions that reverses linked list
 *
 * @h: head
 *
 * return: a pointer to the first node of the reverse list
 **/
listint_t *reverse_listint(listint_t **head);
{
	
	{
		listint_t *first;
		listint_t *second;
	}

	(first = (*head)->next;
	  (*head)->next = second;
	  first = (*head);
	  (*head) = second);

	(*head) = second;
	return (0);
}
