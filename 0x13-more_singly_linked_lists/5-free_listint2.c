#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a lxistint_t list and sets the heada to NULL.
 * @head: Pointer to a pointer to the head of the linked list.
 * Return: void as usual
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	if (*head == NULL)
	{
		free(*head);
		head = NULL;
		return;
	}

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	free(*head);
	head = NULL;
}

