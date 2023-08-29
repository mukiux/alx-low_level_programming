#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list.
 * @sasa: Pointer to the head of the linked list.
 *
 * Return: Sum of all the data in the linked list, or 0 if the list is empty.
 */
int sum_listint(listint_t *sasa)
{
	int sum = 0;

	if (sasa == NULL)
		return (0);

	while (sasa != NULL)
	{
		sum += sasa->n;
		sasa = sasa->next;
	}

	return (sum);
}

