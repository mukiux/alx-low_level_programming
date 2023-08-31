#include <stddef.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list foreva.
 * @yogo: Pointer to a pointer to the head of the linked list.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **yogo)
{
	listint_t *prev = NULL, *next = NULL, *sai = *yogo;

	while (sai != NULL)
	{
		next = sai->next;
		sai->next = prev;
		prev = sai;
		sai = next;
	}

	*yogo = prev;
	return (*yogo);
}

